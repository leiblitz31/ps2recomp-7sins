#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8230
// Address: 0x1c8230 - 0x1c8710
void sub_001C8230_0x1c8230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8230_0x1c8230");
#endif

    switch (ctx->pc) {
        case 0x1c8298u: goto label_1c8298;
        case 0x1c82b0u: goto label_1c82b0;
        case 0x1c82fcu: goto label_1c82fc;
        case 0x1c8314u: goto label_1c8314;
        case 0x1c8324u: goto label_1c8324;
        case 0x1c8348u: goto label_1c8348;
        case 0x1c8388u: goto label_1c8388;
        case 0x1c83d0u: goto label_1c83d0;
        case 0x1c845cu: goto label_1c845c;
        case 0x1c8478u: goto label_1c8478;
        case 0x1c8508u: goto label_1c8508;
        case 0x1c8524u: goto label_1c8524;
        case 0x1c8550u: goto label_1c8550;
        case 0x1c8578u: goto label_1c8578;
        case 0x1c85b0u: goto label_1c85b0;
        case 0x1c85d0u: goto label_1c85d0;
        case 0x1c85e8u: goto label_1c85e8;
        case 0x1c85f8u: goto label_1c85f8;
        case 0x1c8610u: goto label_1c8610;
        case 0x1c8648u: goto label_1c8648;
        case 0x1c8680u: goto label_1c8680;
        case 0x1c86a8u: goto label_1c86a8;
        case 0x1c86b4u: goto label_1c86b4;
        case 0x1c86dcu: goto label_1c86dc;
        default: break;
    }

    ctx->pc = 0x1c8230u;

    // 0x1c8230: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c8230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1c8234: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c8234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c8238: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c8238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c823c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c823cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c8240: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c8240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c8244: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c8244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c8248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c824c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c824cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c8250: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1c8250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x1c8254: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x1c8254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x1c8258: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1c8258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c825c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1c825cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1c8260: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c8260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c8264: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1c8264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c8268: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1c8268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c826c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c826cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c8270: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x1c8270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8278: 0x0  nop
    ctx->pc = 0x1c8278u;
    // NOP
    // 0x1c827c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c827cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8280: 0x45010116  bc1t        . + 4 + (0x116 << 2)
    ctx->pc = 0x1C8280u;
    {
        const bool branch_taken_0x1c8280 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8280) {
            ctx->pc = 0x1C86DCu;
            goto label_1c86dc;
        }
    }
    ctx->pc = 0x1C8288u;
    // 0x1c8288: 0x8f82bb44  lw          $v0, -0x44BC($gp)
    ctx->pc = 0x1c8288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949700)));
    // 0x1c828c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1c828cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c8290: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8290u;
    {
        const bool branch_taken_0x1c8290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8290) {
            ctx->pc = 0x1C829Cu;
            goto label_1c829c;
        }
    }
    ctx->pc = 0x1C8298u;
label_1c8298:
    // 0x1c8298: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1c8298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1c829c:
    // 0x1c829c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c82a0: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c82a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c82a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c82a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82a8: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C82A8u;
    SET_GPR_U32(ctx, 31, 0x1C82B0u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C82A8u, 0x1C82B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82B0u;
label_1c82b0:
    // 0x1c82b0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1c82b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c82b4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1c82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c82b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c82bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c82c0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c82c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c82c4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c82c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c82cc: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x1c82ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c82d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c82d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c82d4: 0x4501fff0  bc1t        . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C82D4u;
    {
        const bool branch_taken_0x1c82d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c82d4) {
            ctx->pc = 0x1C8298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8298;
        }
    }
    ctx->pc = 0x1C82DCu;
    // 0x1c82dc: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x1c82dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1c82e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C82E0u;
    {
        const bool branch_taken_0x1c82e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c82e0) {
            ctx->pc = 0x1C82F0u;
            goto label_1c82f0;
        }
    }
    ctx->pc = 0x1C82E8u;
    // 0x1c82e8: 0x8f82bb44  lw          $v0, -0x44BC($gp)
    ctx->pc = 0x1c82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949700)));
    // 0x1c82ec: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1c82ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c82f0:
    // 0x1c82f0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1c82f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c82f4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C82F4u;
    SET_GPR_U32(ctx, 31, 0x1C82FCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C82F4u, 0x1C82FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82FCu;
label_1c82fc:
    // 0x1c82fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1c82fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8300: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c8300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c8304: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c8308: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c830c: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C830Cu;
    SET_GPR_U32(ctx, 31, 0x1C8314u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C830Cu, 0x1C8314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8314u;
label_1c8314:
    // 0x1c8314: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1c8314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c8318: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c8318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c831c: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x1C831Cu;
    SET_GPR_U32(ctx, 31, 0x1C8324u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x1C831Cu, 0x1C8324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8324u;
label_1c8324:
    // 0x1c8324: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1c8324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c8328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c832c: 0x108300eb  beq         $a0, $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x1C832Cu;
    {
        const bool branch_taken_0x1c832c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c832c) {
            ctx->pc = 0x1C86DCu;
            goto label_1c86dc;
        }
    }
    ctx->pc = 0x1C8334u;
    // 0x1c8334: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c8334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c8338: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c833c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c833cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8340: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8340u;
    SET_GPR_U32(ctx, 31, 0x1C8348u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8340u, 0x1C8348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8348u;
label_1c8348:
    // 0x1c8348: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c8348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c834c: 0x106000b0  beqz        $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1C834Cu;
    {
        const bool branch_taken_0x1c834c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c834c) {
            ctx->pc = 0x1C8610u;
            goto label_1c8610;
        }
    }
    ctx->pc = 0x1C8354u;
    // 0x1c8354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8358: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1C8358u;
    {
        const bool branch_taken_0x1c8358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8358) {
            ctx->pc = 0x1C8510u;
            goto label_1c8510;
        }
    }
    ctx->pc = 0x1C8360u;
    // 0x1c8360: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c8360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8364: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8364u;
    {
        const bool branch_taken_0x1c8364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8364) {
            ctx->pc = 0x1C8374u;
            goto label_1c8374;
        }
    }
    ctx->pc = 0x1C836Cu;
    // 0x1c836c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1C836Cu;
    {
        const bool branch_taken_0x1c836c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c836c) {
            ctx->pc = 0x1C8610u;
            goto label_1c8610;
        }
    }
    ctx->pc = 0x1C8374u;
label_1c8374:
    // 0x1c8374: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c8374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c8378: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c837c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c837cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8380: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8380u;
    SET_GPR_U32(ctx, 31, 0x1C8388u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8380u, 0x1C8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8388u;
label_1c8388:
    // 0x1c8388: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1c8388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c838c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c838cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8390: 0x0  nop
    ctx->pc = 0x1c8390u;
    // NOP
    // 0x1c8394: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c8394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c8398: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c839c: 0x0  nop
    ctx->pc = 0x1c839cu;
    // NOP
    // 0x1c83a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c83a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c83a4: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x1C83A4u;
    {
        const bool branch_taken_0x1c83a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c83a4) {
            ctx->pc = 0x1C8464u;
            goto label_1c8464;
        }
    }
    ctx->pc = 0x1C83ACu;
    // 0x1c83ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1c83acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c83b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c83b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c83b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c83b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c83b8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1c83b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c83bc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c83c0: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c83c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c83c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c83c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83c8: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C83C8u;
    SET_GPR_U32(ctx, 31, 0x1C83D0u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C83C8u, 0x1C83D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83D0u;
label_1c83d0:
    // 0x1c83d0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1c83d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c83d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c83d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c83d8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1c83d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c83dc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1c83dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c83e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1c83e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c83e4: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x1c83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1c83e8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1c83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c83ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c83f0: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x1c83f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
    // 0x1c83f4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c83f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c83f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c83fc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c8400: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c8400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c8404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8408: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x1c8408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1c840c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1c840cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c8410: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8410u;
    {
        const bool branch_taken_0x1c8410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8410) {
            ctx->pc = 0x1C843Cu;
            goto label_1c843c;
        }
    }
    ctx->pc = 0x1C8418u;
    // 0x1c8418: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c8418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c841c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c841cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c8420: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c8420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c8424: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c8424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c8428: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c8428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c842c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8430: 0xac4400b0  sw          $a0, 0xB0($v0)
    ctx->pc = 0x1c8430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 4));
    // 0x1c8434: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1C8434u;
    {
        const bool branch_taken_0x1c8434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8434) {
            ctx->pc = 0x1C8610u;
            goto label_1c8610;
        }
    }
    ctx->pc = 0x1C843Cu;
label_1c843c:
    // 0x1c843c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c843cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8440: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c8440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8444: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1c8444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1c8448: 0x27859638  addiu       $a1, $gp, -0x69C8
    ctx->pc = 0x1c8448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940216));
    // 0x1c844c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c844cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8450: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1c8450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8454: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1C8454u;
    SET_GPR_U32(ctx, 31, 0x1C845Cu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1C8454u, 0x1C845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C845Cu;
label_1c845c:
    // 0x1c845c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1C845Cu;
    {
        const bool branch_taken_0x1c845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c845c) {
            ctx->pc = 0x1C8610u;
            goto label_1c8610;
        }
    }
    ctx->pc = 0x1C8464u;
label_1c8464:
    // 0x1c8464: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c8464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c8468: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c846c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c846cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8470: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8470u;
    SET_GPR_U32(ctx, 31, 0x1C8478u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8470u, 0x1C8478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8478u;
label_1c8478:
    // 0x1c8478: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1c8478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c847c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1c847cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1c8480: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c8480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c8484: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1c8484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1c8488: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1c8488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c848c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1c848cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c8490: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x1c8490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1c8494: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1c8494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c8498: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c8498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c849c: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x1c849cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
    // 0x1c84a0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1c84a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c84a4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c84a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c84ac: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c84acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c84b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c84b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c84b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c84b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c84b8: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x1c84b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1c84bc: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C84BCu;
    {
        const bool branch_taken_0x1c84bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c84bc) {
            ctx->pc = 0x1C84E8u;
            goto label_1c84e8;
        }
    }
    ctx->pc = 0x1C84C4u;
    // 0x1c84c4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1c84c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c84c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c84cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c84d0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c84d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c84d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c84d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c84dc: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x1c84dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x1c84e0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1C84E0u;
    {
        const bool branch_taken_0x1c84e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c84e0) {
            ctx->pc = 0x1C8610u;
            goto label_1c8610;
        }
    }
    ctx->pc = 0x1C84E8u;
label_1c84e8:
    // 0x1c84e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c84e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c84ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c84ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c84f0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1c84f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1c84f4: 0x27859640  addiu       $a1, $gp, -0x69C0
    ctx->pc = 0x1c84f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940224));
    // 0x1c84f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c84f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c84fc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1c84fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8500: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1C8500u;
    SET_GPR_U32(ctx, 31, 0x1C8508u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1C8500u, 0x1C8508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8508u;
label_1c8508:
    // 0x1c8508: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1C8508u;
    {
        const bool branch_taken_0x1c8508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8508) {
            ctx->pc = 0x1C8610u;
            goto label_1c8610;
        }
    }
    ctx->pc = 0x1C8510u;
label_1c8510:
    // 0x1c8510: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c8510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c8514: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c8518: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c851c: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C851Cu;
    SET_GPR_U32(ctx, 31, 0x1C8524u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C851Cu, 0x1C8524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8524u;
label_1c8524:
    // 0x1c8524: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x1c8524u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c8528: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1C8528u;
    {
        const bool branch_taken_0x1c8528 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x1c8528) {
            ctx->pc = 0x1C8558u;
            goto label_1c8558;
        }
    }
    ctx->pc = 0x1C8530u;
    // 0x1c8530: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c8530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8534: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c8534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8538: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1c8538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1c853c: 0x27859648  addiu       $a1, $gp, -0x69B8
    ctx->pc = 0x1c853cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940232));
    // 0x1c8540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c8540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8544: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1c8544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8548: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1C8548u;
    SET_GPR_U32(ctx, 31, 0x1C8550u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1C8548u, 0x1C8550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8550u;
label_1c8550:
    // 0x1c8550: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8550u;
    {
        const bool branch_taken_0x1c8550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8550) {
            ctx->pc = 0x1C8578u;
            goto label_1c8578;
        }
    }
    ctx->pc = 0x1C8558u;
label_1c8558:
    // 0x1c8558: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c8558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c855c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c855cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8560: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1c8560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1c8564: 0x2785964c  addiu       $a1, $gp, -0x69B4
    ctx->pc = 0x1c8564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940236));
    // 0x1c8568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c8568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c856c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1c856cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8570: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1C8570u;
    SET_GPR_U32(ctx, 31, 0x1C8578u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1C8570u, 0x1C8578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8578u;
label_1c8578:
    // 0x1c8578: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c8578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c857c: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1c857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8580: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1c8580u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8584: 0x0  nop
    ctx->pc = 0x1c8584u;
    // NOP
    // 0x1c8588: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c8588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c858c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c858cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c8590: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x1c8590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x1c8594: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c8594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c8598: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1c8598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c859c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c85a0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c85a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1c85a4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1c85a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c85a8: 0xc0724a8  jal         func_1C92A0
    ctx->pc = 0x1C85A8u;
    SET_GPR_U32(ctx, 31, 0x1C85B0u);
    ctx->pc = 0x1C92A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C92A0u, 0x1C85A8u, 0x1C85B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85B0u;
label_1c85b0:
    // 0x1c85b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c85b4: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1c85b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c85b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c85b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c85bc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c85bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c85c0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c85c4: 0x27859600  addiu       $a1, $gp, -0x6A00
    ctx->pc = 0x1c85c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940160));
    // 0x1c85c8: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1C85C8u;
    SET_GPR_U32(ctx, 31, 0x1C85D0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1C85C8u, 0x1C85D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85D0u;
label_1c85d0:
    // 0x1c85d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c85d4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c85d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c85d8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c85d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c85dc: 0x24a575e8  addiu       $a1, $a1, 0x75E8
    ctx->pc = 0x1c85dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30184));
    // 0x1c85e0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C85E0u;
    SET_GPR_U32(ctx, 31, 0x1C85E8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C85E0u, 0x1C85E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85E8u;
label_1c85e8:
    // 0x1c85e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c85e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85ec: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1c85ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c85f0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C85F0u;
    SET_GPR_U32(ctx, 31, 0x1C85F8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C85F0u, 0x1C85F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C85F8u;
label_1c85f8:
    // 0x1c85f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c85f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c85fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c85fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8600: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1c8600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c8604: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8608: 0xc08c32c  jal         func_230CB0
    ctx->pc = 0x1C8608u;
    SET_GPR_U32(ctx, 31, 0x1C8610u);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x1C8608u, 0x1C8610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8610u;
label_1c8610:
    // 0x1c8610: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c8610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c8614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8618: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1c8618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c861c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c861cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c8620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c8620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8624: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1c8624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c8628: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c8628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c862c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8630: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x1c8630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x1c8634: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c8634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c8638: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c863c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c863cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8640: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8640u;
    SET_GPR_U32(ctx, 31, 0x1C8648u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8640u, 0x1C8648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8648u;
label_1c8648:
    // 0x1c8648: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1c8648u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c864c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1c864cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1c8650: 0x24427770  addiu       $v0, $v0, 0x7770
    ctx->pc = 0x1c8650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30576));
    // 0x1c8654: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1c8654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c8658: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c8658u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E7770u));
    // 0x1c865c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1c865cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1c8660: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1c8660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1c8664: 0x24427780  addiu       $v0, $v0, 0x7780
    ctx->pc = 0x1c8664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30592));
    // 0x1c8668: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1c8668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c866c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c866cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E7780u));
    // 0x1c8670: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1c8670u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1c8674: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1c8674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c8678: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C8678u;
    SET_GPR_U32(ctx, 31, 0x1C8680u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C8678u, 0x1C8680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8680u;
label_1c8680:
    // 0x1c8680: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c8684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8688: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c8688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c868c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c868cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8690: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1c8690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c8694: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x1c8694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c8698: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c869c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c869cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86a0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1C86A0u;
    SET_GPR_U32(ctx, 31, 0x1C86A8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C86A0u, 0x1C86A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C86A8u;
label_1c86a8:
    // 0x1c86a8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1c86a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c86ac: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C86ACu;
    SET_GPR_U32(ctx, 31, 0x1C86B4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C86ACu, 0x1C86B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C86B4u;
label_1c86b4:
    // 0x1c86b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c86b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c86b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86bc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c86bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c86c0: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1c86c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c86c4: 0xc78c82d0  lwc1        $f12, -0x7D30($gp)
    ctx->pc = 0x1c86c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c86c8: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x1c86c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c86cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c86ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c86d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86d4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1C86D4u;
    SET_GPR_U32(ctx, 31, 0x1C86DCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C86D4u, 0x1C86DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C86DCu;
label_1c86dc:
    // 0x1c86dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c86dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c86e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c86e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c86e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c86e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c86e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c86e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c86ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c86ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c86f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c86f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c86f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c86f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c86f8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1c86f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c86fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C86FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C86FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8704u;
    // 0x1c8704: 0x0  nop
    ctx->pc = 0x1c8704u;
    // NOP
    // 0x1c8708: 0x0  nop
    ctx->pc = 0x1c8708u;
    // NOP
    // 0x1c870c: 0x0  nop
    ctx->pc = 0x1c870cu;
    // NOP
    ctx->pc = 0x1c8710u;
}
