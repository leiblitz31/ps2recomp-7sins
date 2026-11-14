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

// Function: sub_0039E238
// Address: 0x39e238 - 0x39e3a8
void sub_0039E238_0x39e238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E238_0x39e238");
#endif

    switch (ctx->pc) {
        case 0x39e25cu: goto label_39e25c;
        case 0x39e274u: goto label_39e274;
        case 0x39e290u: goto label_39e290;
        case 0x39e2a0u: goto label_39e2a0;
        case 0x39e2b0u: goto label_39e2b0;
        case 0x39e2ccu: goto label_39e2cc;
        case 0x39e2d8u: goto label_39e2d8;
        case 0x39e2e8u: goto label_39e2e8;
        case 0x39e2f4u: goto label_39e2f4;
        case 0x39e300u: goto label_39e300;
        case 0x39e30cu: goto label_39e30c;
        case 0x39e348u: goto label_39e348;
        case 0x39e354u: goto label_39e354;
        case 0x39e360u: goto label_39e360;
        case 0x39e36cu: goto label_39e36c;
        case 0x39e378u: goto label_39e378;
        case 0x39e384u: goto label_39e384;
        default: break;
    }

    ctx->pc = 0x39e238u;

    // 0x39e238: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39e238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x39e23c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x39e23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x39e240: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x39e240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x39e244: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x39e244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x39e248: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39e248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x39e24c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x39e24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x39e250: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39e250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39e254: 0xc1116a2  jal         func_445A88
    ctx->pc = 0x39E254u;
    SET_GPR_U32(ctx, 31, 0x39E25Cu);
    ctx->pc = 0x445A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445A88u, 0x39E254u, 0x39E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E25Cu;
label_39e25c:
    // 0x39e25c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39e25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e260: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x39E260u;
    {
        const bool branch_taken_0x39e260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E260u;
        // 0x39e264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e260) {
            ctx->pc = 0x39E2B0u;
            goto label_39e2b0;
        }
    }
    ctx->pc = 0x39E268u;
    // 0x39e268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e26c: 0xc112074  jal         func_4481D0
    ctx->pc = 0x39E26Cu;
    SET_GPR_U32(ctx, 31, 0x39E274u);
    ctx->pc = 0x39E270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E26Cu;
    // 0x39e270: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4481D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4481D0u, 0x39E26Cu, 0x39E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E274u;
label_39e274:
    // 0x39e274: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39E274u;
    {
        const bool branch_taken_0x39e274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E274u;
        // 0x39e278: 0x3c06005e  lui         $a2, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e274) {
            ctx->pc = 0x39E2A8u;
            goto label_39e2a8;
        }
    }
    ctx->pc = 0x39E27Cu;
    // 0x39e27c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39e27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e280: 0x24c6ae90  addiu       $a2, $a2, -0x5170
    ctx->pc = 0x39e280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946448));
    // 0x39e284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39e284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e288: 0xc1120d8  jal         func_448360
    ctx->pc = 0x39E288u;
    SET_GPR_U32(ctx, 31, 0x39E290u);
    ctx->pc = 0x39E28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E288u;
    // 0x39e28c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448360u, 0x39E288u, 0x39E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E290u;
label_39e290:
    // 0x39e290: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E290u;
    {
        const bool branch_taken_0x39e290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e290) {
            ctx->pc = 0x39E2A8u;
            goto label_39e2a8;
        }
    }
    ctx->pc = 0x39E298u;
    // 0x39e298: 0xc111dea  jal         func_4477A8
    ctx->pc = 0x39E298u;
    SET_GPR_U32(ctx, 31, 0x39E2A0u);
    ctx->pc = 0x39E29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E298u;
    // 0x39e29c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4477A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4477A8u, 0x39E298u, 0x39E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E2A0u;
label_39e2a0:
    // 0x39e2a0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x39E2A0u;
    {
        const bool branch_taken_0x39e2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E2A0u;
        // 0x39e2a4: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e2a0) {
            ctx->pc = 0x39E2E0u;
            goto label_39e2e0;
        }
    }
    ctx->pc = 0x39E2A8u;
label_39e2a8:
    // 0x39e2a8: 0xc1116c6  jal         func_445B18
    ctx->pc = 0x39E2A8u;
    SET_GPR_U32(ctx, 31, 0x39E2B0u);
    ctx->pc = 0x39E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E2A8u;
    // 0x39e2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x39E2A8u, 0x39E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E2B0u;
label_39e2b0:
    // 0x39e2b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39e2b4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x39e2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x39e2b8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x39e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x39e2bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x39e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x39e2c0: 0x24a5ba50  addiu       $a1, $a1, -0x45B0
    ctx->pc = 0x39e2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949456));
    // 0x39e2c4: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x39E2C4u;
    SET_GPR_U32(ctx, 31, 0x39E2CCu);
    ctx->pc = 0x39E2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E2C4u;
    // 0x39e2c8: 0x34840006  ori         $a0, $a0, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x39E2C4u, 0x39E2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E2CCu;
label_39e2cc:
    // 0x39e2cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39e2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e2d0: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x39E2D0u;
    SET_GPR_U32(ctx, 31, 0x39E2D8u);
    ctx->pc = 0x39E2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E2D0u;
    // 0x39e2d4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x39E2D0u, 0x39E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E2D8u;
label_39e2d8:
    // 0x39e2d8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x39e2d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e2dc: 0x0  nop
    ctx->pc = 0x39e2dcu;
    // NOP
label_39e2e0:
    // 0x39e2e0: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x39E2E0u;
    SET_GPR_U32(ctx, 31, 0x39E2E8u);
    ctx->pc = 0x39E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E2E0u;
    // 0x39e2e4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x39E2E0u, 0x39E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E2E8u;
label_39e2e8:
    // 0x39e2e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39e2e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e2ec: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x39E2ECu;
    SET_GPR_U32(ctx, 31, 0x39E2F4u);
    ctx->pc = 0x39E2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E2ECu;
    // 0x39e2f0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x39E2ECu, 0x39E2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E2F4u;
label_39e2f4:
    // 0x39e2f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39e2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e2f8: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x39E2F8u;
    SET_GPR_U32(ctx, 31, 0x39E300u);
    ctx->pc = 0x39E2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E2F8u;
    // 0x39e2fc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x39E2F8u, 0x39E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E300u;
label_39e300:
    // 0x39e300: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39e300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e304: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x39E304u;
    SET_GPR_U32(ctx, 31, 0x39E30Cu);
    ctx->pc = 0x39E308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E304u;
    // 0x39e308: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x39E304u, 0x39E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E30Cu;
label_39e30c:
    // 0x39e30c: 0x8f85bf18  lw          $a1, -0x40E8($gp)
    ctx->pc = 0x39e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x39e310: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x39e310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x39e314: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x39e314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x39e318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39e318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e31c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x39e31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x39e320: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39e320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e324: 0xacb2003c  sw          $s2, 0x3C($a1)
    ctx->pc = 0x39e324u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 18));
    // 0x39e328: 0xacb30038  sw          $s3, 0x38($a1)
    ctx->pc = 0x39e328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 19));
    // 0x39e32c: 0xacb4001c  sw          $s4, 0x1C($a1)
    ctx->pc = 0x39e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 20));
    // 0x39e330: 0xacb00020  sw          $s0, 0x20($a1)
    ctx->pc = 0x39e330u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 16));
    // 0x39e334: 0xacb00024  sw          $s0, 0x24($a1)
    ctx->pc = 0x39e334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 16));
    // 0x39e338: 0xacb00028  sw          $s0, 0x28($a1)
    ctx->pc = 0x39e338u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 16));
    // 0x39e33c: 0xacb1002c  sw          $s1, 0x2C($a1)
    ctx->pc = 0x39e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 17));
    // 0x39e340: 0xc111306  jal         func_444C18
    ctx->pc = 0x39E340u;
    SET_GPR_U32(ctx, 31, 0x39E348u);
    ctx->pc = 0x39E344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E340u;
    // 0x39e344: 0xacb10030  sw          $s1, 0x30($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444C18u, 0x39E340u, 0x39E348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E348u;
label_39e348:
    // 0x39e348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e34c: 0xc11110a  jal         func_444428
    ctx->pc = 0x39E34Cu;
    SET_GPR_U32(ctx, 31, 0x39E354u);
    ctx->pc = 0x39E350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E34Cu;
    // 0x39e350: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444428u, 0x39E34Cu, 0x39E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E354u;
label_39e354:
    // 0x39e354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e358: 0xc11110a  jal         func_444428
    ctx->pc = 0x39E358u;
    SET_GPR_U32(ctx, 31, 0x39E360u);
    ctx->pc = 0x39E35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E358u;
    // 0x39e35c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444428u, 0x39E358u, 0x39E360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E360u;
label_39e360:
    // 0x39e360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e364: 0xc11110a  jal         func_444428
    ctx->pc = 0x39E364u;
    SET_GPR_U32(ctx, 31, 0x39E36Cu);
    ctx->pc = 0x39E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E364u;
    // 0x39e368: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444428u, 0x39E364u, 0x39E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E36Cu;
label_39e36c:
    // 0x39e36c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39e36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e370: 0xc11110a  jal         func_444428
    ctx->pc = 0x39E370u;
    SET_GPR_U32(ctx, 31, 0x39E378u);
    ctx->pc = 0x39E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E370u;
    // 0x39e374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444428u, 0x39E370u, 0x39E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E378u;
label_39e378:
    // 0x39e378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39e378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e37c: 0xc11110a  jal         func_444428
    ctx->pc = 0x39E37Cu;
    SET_GPR_U32(ctx, 31, 0x39E384u);
    ctx->pc = 0x39E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E37Cu;
    // 0x39e380: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444428u, 0x39E37Cu, 0x39E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E384u;
label_39e384:
    // 0x39e384: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x39e384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39e388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e38c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x39e38cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39e390: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x39e390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39e394: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39e394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39e398: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x39e398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e39c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39e39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x39E3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3A0u;
        // 0x39e3a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E3A8u;
}
