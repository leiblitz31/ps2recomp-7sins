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

// Function: sub_002C41C0
// Address: 0x2c41c0 - 0x2c4350
void sub_002C41C0_0x2c41c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C41C0_0x2c41c0");
#endif

    switch (ctx->pc) {
        case 0x2c4220u: goto label_2c4220;
        case 0x2c4234u: goto label_2c4234;
        case 0x2c4240u: goto label_2c4240;
        case 0x2c4250u: goto label_2c4250;
        case 0x2c4260u: goto label_2c4260;
        case 0x2c4270u: goto label_2c4270;
        case 0x2c427cu: goto label_2c427c;
        case 0x2c4290u: goto label_2c4290;
        case 0x2c42a8u: goto label_2c42a8;
        case 0x2c42c0u: goto label_2c42c0;
        case 0x2c42e8u: goto label_2c42e8;
        case 0x2c42f8u: goto label_2c42f8;
        case 0x2c430cu: goto label_2c430c;
        case 0x2c4318u: goto label_2c4318;
        default: break;
    }

    ctx->pc = 0x2c41c0u;

    // 0x2c41c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c41c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c41c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c41c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c41c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c41c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c41cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c41ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c41d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c41d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c41d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c41d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c41d8: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2c41d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2c41dc: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2c41dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x2c41e0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2c41e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c41e4: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x2c41e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c41e8: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2c41e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2c41ec: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2c41ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c41f0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2c41f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c41f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c41f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c41f8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2c41f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c41fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c41fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4200: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2c4200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4204: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c4204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4208: 0x45010047  bc1t        . + 4 + (0x47 << 2)
    ctx->pc = 0x2C4208u;
    {
        const bool branch_taken_0x2c4208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4208) {
            ctx->pc = 0x2C4328u;
            goto label_2c4328;
        }
    }
    ctx->pc = 0x2C4210u;
    // 0x2c4210: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x2c4210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2c4214: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c4214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c4218: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C4218u;
    SET_GPR_U32(ctx, 31, 0x2C4220u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C4218u, 0x2C4220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4220u;
label_2c4220:
    // 0x2c4220: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c4220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4224: 0x10110034  beq         $zero, $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2C4224u;
    {
        const bool branch_taken_0x2c4224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x2c4224) {
            ctx->pc = 0x2C42F8u;
            goto label_2c42f8;
        }
    }
    ctx->pc = 0x2C422Cu;
    // 0x2c422c: 0xc090864  jal         func_242190
    ctx->pc = 0x2C422Cu;
    SET_GPR_U32(ctx, 31, 0x2C4234u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2C422Cu, 0x2C4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4234u;
label_2c4234:
    // 0x2c4234: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c4234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4238: 0xc0905a0  jal         func_241680
    ctx->pc = 0x2C4238u;
    SET_GPR_U32(ctx, 31, 0x2C4240u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x2C4238u, 0x2C4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4240u;
label_2c4240:
    // 0x2c4240: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c4240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4244: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2c4244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c4248: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2C4248u;
    SET_GPR_U32(ctx, 31, 0x2C4250u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2C4248u, 0x2C4250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4250u;
label_2c4250:
    // 0x2c4250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c4250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c4254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4258: 0xc09a364  jal         func_268D90
    ctx->pc = 0x2C4258u;
    SET_GPR_U32(ctx, 31, 0x2C4260u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x2C4258u, 0x2C4260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4260u;
label_2c4260:
    // 0x2c4260: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c4260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4264: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c4264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c4268: 0xc09d084  jal         func_274210
    ctx->pc = 0x2C4268u;
    SET_GPR_U32(ctx, 31, 0x2C4270u);
    ctx->pc = 0x274210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274210u, 0x2C4268u, 0x2C4270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4270u;
label_2c4270:
    // 0x2c4270: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2c4270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c4274: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2C4274u;
    SET_GPR_U32(ctx, 31, 0x2C427Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2C4274u, 0x2C427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C427Cu;
label_2c427c:
    // 0x2c427c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c4280: 0x24050503  addiu       $a1, $zero, 0x503
    ctx->pc = 0x2c4280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x2c4284: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c4284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4288: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x2C4288u;
    SET_GPR_U32(ctx, 31, 0x2C4290u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x2C4288u, 0x2C4290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4290u;
label_2c4290:
    // 0x2c4290: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c4290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c4294: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c4294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c4298: 0x24a5e120  addiu       $a1, $a1, -0x1EE0
    ctx->pc = 0x2c4298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959392));
    // 0x2c429c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c429cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c42a0: 0xc047314  jal         func_11CC50
    ctx->pc = 0x2C42A0u;
    SET_GPR_U32(ctx, 31, 0x2C42A8u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x2C42A0u, 0x2C42A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42A8u;
label_2c42a8:
    // 0x2c42a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c42a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c42ac: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c42acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c42b0: 0x24a5e130  addiu       $a1, $a1, -0x1ED0
    ctx->pc = 0x2c42b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959408));
    // 0x2c42b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c42b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c42b8: 0xc047314  jal         func_11CC50
    ctx->pc = 0x2C42B8u;
    SET_GPR_U32(ctx, 31, 0x2C42C0u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x2C42B8u, 0x2C42C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42C0u;
label_2c42c0:
    // 0x2c42c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c42c4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2c42c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2c42c8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2c42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2c42cc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2c42ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2c42d0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2c42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c42d4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2c42d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x2c42d8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2c42d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c42dc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2c42dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c42e0: 0xc0b0e68  jal         func_2C39A0
    ctx->pc = 0x2C42E0u;
    SET_GPR_U32(ctx, 31, 0x2C42E8u);
    ctx->pc = 0x2C39A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39A0u, 0x2C42E0u, 0x2C42E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42E8u;
label_2c42e8:
    // 0x2c42e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c42ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c42ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c42f0: 0xc09d098  jal         func_274260
    ctx->pc = 0x2C42F0u;
    SET_GPR_U32(ctx, 31, 0x2C42F8u);
    ctx->pc = 0x274260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274260u, 0x2C42F0u, 0x2C42F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42F8u;
label_2c42f8:
    // 0x2c42f8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C42F8u;
    {
        const bool branch_taken_0x2c42f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c42f8) {
            ctx->pc = 0x2C431Cu;
            goto label_2c431c;
        }
    }
    ctx->pc = 0x2C4300u;
    // 0x2c4300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4304: 0xc0b0dfc  jal         func_2C37F0
    ctx->pc = 0x2C4304u;
    SET_GPR_U32(ctx, 31, 0x2C430Cu);
    ctx->pc = 0x2C37F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C37F0u, 0x2C4304u, 0x2C430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C430Cu;
label_2c430c:
    // 0x2c430c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c430cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4310: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2C4310u;
    SET_GPR_U32(ctx, 31, 0x2C4318u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2C4310u, 0x2C4318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4318u;
label_2c4318:
    // 0x2c4318: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c4318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c431c:
    // 0x2c431c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c431cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4320: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2c4320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c4324: 0xa064000c  sb          $a0, 0xC($v1)
    ctx->pc = 0x2c4324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 4));
label_2c4328:
    // 0x2c4328: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c4328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c432c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c432cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4330: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c4330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4334: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c433c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2c433cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c4340: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4348u;
    // 0x2c4348: 0x0  nop
    ctx->pc = 0x2c4348u;
    // NOP
    // 0x2c434c: 0x0  nop
    ctx->pc = 0x2c434cu;
    // NOP
    ctx->pc = 0x2c4350u;
}
