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

// Function: sub_004448A0
// Address: 0x4448a0 - 0x444c18
void sub_004448A0_0x4448a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004448A0_0x4448a0");
#endif

    switch (ctx->pc) {
        case 0x4448d4u: goto label_4448d4;
        case 0x444914u: goto label_444914;
        case 0x444960u: goto label_444960;
        case 0x44497cu: goto label_44497c;
        case 0x44498cu: goto label_44498c;
        case 0x44499cu: goto label_44499c;
        case 0x4449b4u: goto label_4449b4;
        case 0x4449c0u: goto label_4449c0;
        case 0x444a30u: goto label_444a30;
        case 0x444a6cu: goto label_444a6c;
        case 0x444a8cu: goto label_444a8c;
        case 0x444a9cu: goto label_444a9c;
        case 0x444aacu: goto label_444aac;
        case 0x444ac4u: goto label_444ac4;
        case 0x444ad0u: goto label_444ad0;
        case 0x444bf4u: goto label_444bf4;
        case 0x444c00u: goto label_444c00;
        default: break;
    }

    ctx->pc = 0x4448a0u;

    // 0x4448a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4448a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4448a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4448a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4448a8: 0x8f86bf18  lw          $a2, -0x40E8($gp)
    ctx->pc = 0x4448a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4448ac: 0x2444e880  addiu       $a0, $v0, -0x1780
    ctx->pc = 0x4448acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x4448b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4448b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4448b4: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x4448b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4448b8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4448b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x4448bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4448BCu;
    {
        const bool branch_taken_0x4448bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4448C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4448BCu;
        // 0x4448c0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4448bc) {
            ctx->pc = 0x4448DCu;
            goto label_4448dc;
        }
    }
    ctx->pc = 0x4448C4u;
    // 0x4448c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4448c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4448c8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x4448c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4448cc: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4448CCu;
    SET_GPR_U32(ctx, 31, 0x4448D4u);
    ctx->pc = 0x4448D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4448CCu;
    // 0x4448d0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4448CCu, 0x4448D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4448D4u;
label_4448d4:
    // 0x4448d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4448D4u;
    {
        const bool branch_taken_0x4448d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4448D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4448D4u;
        // 0x4448d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4448d4) {
            ctx->pc = 0x4448E0u;
            goto label_4448e0;
        }
    }
    ctx->pc = 0x4448DCu;
label_4448dc:
    // 0x4448dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4448dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4448e0:
    // 0x4448e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4448e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4448e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4448E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4448E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4448E4u;
        // 0x4448e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4448E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4448ECu;
    // 0x4448ec: 0x0  nop
    ctx->pc = 0x4448ecu;
    // NOP
    // 0x4448f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4448f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4448f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4448f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4448f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4448f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4448fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4448fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444900: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x444900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x444904: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x444904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x444908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x444908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44490c: 0xc111716  jal         func_445C58
    ctx->pc = 0x44490Cu;
    SET_GPR_U32(ctx, 31, 0x444914u);
    ctx->pc = 0x444910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44490Cu;
    // 0x444910: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C58u, 0x44490Cu, 0x444914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444914u;
label_444914:
    // 0x444914: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x444914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444918: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x444918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x44491c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x44491cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x444920: 0x2445e880  addiu       $a1, $v0, -0x1780
    ctx->pc = 0x444920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444924: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x444924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x444928: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x444928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x44492c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x44492Cu;
    {
        const bool branch_taken_0x44492c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44492Cu;
        // 0x444930: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44492c) {
            ctx->pc = 0x4449A4u;
            goto label_4449a4;
        }
    }
    ctx->pc = 0x444934u;
    // 0x444934: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x444934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x444938: 0x2450004c  addiu       $s0, $v0, 0x4C
    ctx->pc = 0x444938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x44493c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44493cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x444940: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x444940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x444944: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x444944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x444948: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x444948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x44494c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44494cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444950: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x444950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x444954: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x444954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x444958: 0xc113084  jal         func_44C210
    ctx->pc = 0x444958u;
    SET_GPR_U32(ctx, 31, 0x444960u);
    ctx->pc = 0x44495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444958u;
    // 0x44495c: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C210u, 0x444958u, 0x444960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444960u;
label_444960:
    // 0x444960: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x444960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x444964: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x444964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444968: 0xa4520002  sh          $s2, 0x2($v0)
    ctx->pc = 0x444968u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x44496c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44496cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444970: 0xa4530000  sh          $s3, 0x0($v0)
    ctx->pc = 0x444970u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x444974: 0xc111718  jal         func_445C60
    ctx->pc = 0x444974u;
    SET_GPR_U32(ctx, 31, 0x44497Cu);
    ctx->pc = 0x444978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444974u;
    // 0x444978: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x444974u, 0x44497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44497Cu;
label_44497c:
    // 0x44497c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44497Cu;
    {
        const bool branch_taken_0x44497c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44497Cu;
        // 0x444980: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44497c) {
            ctx->pc = 0x444994u;
            goto label_444994;
        }
    }
    ctx->pc = 0x444984u;
    // 0x444984: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x444984u;
    SET_GPR_U32(ctx, 31, 0x44498Cu);
    ctx->pc = 0x444988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444984u;
    // 0x444988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x444984u, 0x44498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44498Cu;
label_44498c:
    // 0x44498c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x44498Cu;
    {
        const bool branch_taken_0x44498c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44498Cu;
        // 0x444990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44498c) {
            ctx->pc = 0x4449C8u;
            goto label_4449c8;
        }
    }
    ctx->pc = 0x444994u;
label_444994:
    // 0x444994: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x444994u;
    SET_GPR_U32(ctx, 31, 0x44499Cu);
    ctx->pc = 0x444998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444994u;
    // 0x444998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x444994u, 0x44499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44499Cu;
label_44499c:
    // 0x44499c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x44499Cu;
    {
        const bool branch_taken_0x44499c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4449A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44499Cu;
        // 0x4449a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44499c) {
            ctx->pc = 0x4449C8u;
            goto label_4449c8;
        }
    }
    ctx->pc = 0x4449A4u;
label_4449a4:
    // 0x4449a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4449a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4449a8: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x4449a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x4449ac: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x4449ACu;
    SET_GPR_U32(ctx, 31, 0x4449B4u);
    ctx->pc = 0x4449B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4449ACu;
    // 0x4449b0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4449ACu, 0x4449B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4449B4u;
label_4449b4:
    // 0x4449b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4449b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4449b8: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x4449B8u;
    SET_GPR_U32(ctx, 31, 0x4449C0u);
    ctx->pc = 0x4449BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4449B8u;
    // 0x4449bc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4449B8u, 0x4449C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4449C0u;
label_4449c0:
    // 0x4449c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4449c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4449c4: 0x0  nop
    ctx->pc = 0x4449c4u;
    // NOP
label_4449c8:
    // 0x4449c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4449c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4449cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4449ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4449d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4449d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4449d4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4449d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4449d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4449d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4449dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4449DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4449E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4449DCu;
        // 0x4449e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4449DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4449E4u;
    // 0x4449e4: 0x0  nop
    ctx->pc = 0x4449e4u;
    // NOP
    // 0x4449e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4449e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4449ec: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x4449ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4449f0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4449f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x4449f4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4449f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x4449f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4449f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x4449fc: 0x2472e880  addiu       $s2, $v1, -0x1780
    ctx->pc = 0x4449fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x444a00: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x444a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x444a04: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x444a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x444a08: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x444a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x444a0c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x444a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444a10: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x444a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x444a14: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x444a14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444a18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x444a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x444a1c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x444a1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444a20: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x444a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x444a24: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x444a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x444a28: 0xc111716  jal         func_445C58
    ctx->pc = 0x444A28u;
    SET_GPR_U32(ctx, 31, 0x444A30u);
    ctx->pc = 0x444A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444A28u;
    // 0x444a2c: 0x10802b  sltu        $s0, $zero, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C58u, 0x444A28u, 0x444A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444A30u;
label_444a30:
    // 0x444a30: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x444A30u;
    {
        const bool branch_taken_0x444a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x444A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444A30u;
        // 0x444a34: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444a30) {
            ctx->pc = 0x444AB4u;
            goto label_444ab4;
        }
    }
    ctx->pc = 0x444A38u;
    // 0x444a38: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x444a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444a3c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x444a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x444a40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x444a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444a44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x444a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x444a48: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x444a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x444a4c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x444a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x444a50: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x444a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x444a54: 0x2450004c  addiu       $s0, $v0, 0x4C
    ctx->pc = 0x444a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x444a58: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x444a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
    // 0x444a5c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x444a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x444a60: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x444a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
    // 0x444a64: 0xc113084  jal         func_44C210
    ctx->pc = 0x444A64u;
    SET_GPR_U32(ctx, 31, 0x444A6Cu);
    ctx->pc = 0x444A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444A64u;
    // 0x444a68: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C210u, 0x444A64u, 0x444A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444A6Cu;
label_444a6c:
    // 0x444a6c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x444a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x444a70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x444a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444a74: 0xa4530004  sh          $s3, 0x4($v0)
    ctx->pc = 0x444a74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 19));
    // 0x444a78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x444a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444a7c: 0xa4540000  sh          $s4, 0x0($v0)
    ctx->pc = 0x444a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x444a80: 0xa4550002  sh          $s5, 0x2($v0)
    ctx->pc = 0x444a80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x444a84: 0xc111718  jal         func_445C60
    ctx->pc = 0x444A84u;
    SET_GPR_U32(ctx, 31, 0x444A8Cu);
    ctx->pc = 0x444A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444A84u;
    // 0x444a88: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x444A84u, 0x444A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444A8Cu;
label_444a8c:
    // 0x444a8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x444A8Cu;
    {
        const bool branch_taken_0x444a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444A8Cu;
        // 0x444a90: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444a8c) {
            ctx->pc = 0x444AA4u;
            goto label_444aa4;
        }
    }
    ctx->pc = 0x444A94u;
    // 0x444a94: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x444A94u;
    SET_GPR_U32(ctx, 31, 0x444A9Cu);
    ctx->pc = 0x444A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444A94u;
    // 0x444a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x444A94u, 0x444A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444A9Cu;
label_444a9c:
    // 0x444a9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x444A9Cu;
    {
        const bool branch_taken_0x444a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444A9Cu;
        // 0x444aa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444a9c) {
            ctx->pc = 0x444AD8u;
            goto label_444ad8;
        }
    }
    ctx->pc = 0x444AA4u;
label_444aa4:
    // 0x444aa4: 0xc112fc8  jal         func_44BF20
    ctx->pc = 0x444AA4u;
    SET_GPR_U32(ctx, 31, 0x444AACu);
    ctx->pc = 0x444AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444AA4u;
    // 0x444aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x444AA4u, 0x444AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444AACu;
label_444aac:
    // 0x444aac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x444AACu;
    {
        const bool branch_taken_0x444aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444AACu;
        // 0x444ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444aac) {
            ctx->pc = 0x444AD8u;
            goto label_444ad8;
        }
    }
    ctx->pc = 0x444AB4u;
label_444ab4:
    // 0x444ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x444ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x444ab8: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x444ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x444abc: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x444ABCu;
    SET_GPR_U32(ctx, 31, 0x444AC4u);
    ctx->pc = 0x444AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444ABCu;
    // 0x444ac0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x444ABCu, 0x444AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444AC4u;
label_444ac4:
    // 0x444ac4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x444ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444ac8: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x444AC8u;
    SET_GPR_U32(ctx, 31, 0x444AD0u);
    ctx->pc = 0x444ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444AC8u;
    // 0x444acc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x444AC8u, 0x444AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444AD0u;
label_444ad0:
    // 0x444ad0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x444ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444ad4: 0x0  nop
    ctx->pc = 0x444ad4u;
    // NOP
label_444ad8:
    // 0x444ad8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x444ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x444adc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x444adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x444ae0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x444ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x444ae4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x444ae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x444ae8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x444ae8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x444aec: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x444aecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x444af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x444af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444af4: 0x3e00008  jr          $ra
    ctx->pc = 0x444AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444AF4u;
        // 0x444af8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444AFCu;
    // 0x444afc: 0x0  nop
    ctx->pc = 0x444afcu;
    // NOP
    // 0x444b00: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x444b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444b04: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x444b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x444b08: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x444b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444b0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x444b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444b10: 0x3e00008  jr          $ra
    ctx->pc = 0x444B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444B10u;
        // 0x444b14: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444B18u;
    // 0x444b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x444b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x444b1c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x444b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x444b20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x444b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x444b24: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x444b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x444b28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x444b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x444b2c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x444B2Cu;
    {
        const bool branch_taken_0x444b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x444B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444B2Cu;
        // 0x444b30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444b2c) {
            ctx->pc = 0x444BE0u;
            goto label_444be0;
        }
    }
    ctx->pc = 0x444B34u;
    // 0x444b34: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x444b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x444b38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x444b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x444b3c: 0x244217a0  addiu       $v0, $v0, 0x17A0
    ctx->pc = 0x444b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6048));
    // 0x444b40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x444b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444b44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x444b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x444b48: 0x800008  jr          $a0
    ctx->pc = 0x444B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x444B50u: goto label_444b50;
            case 0x444B68u: goto label_444b68;
            case 0x444B80u: goto label_444b80;
            case 0x444B98u: goto label_444b98;
            case 0x444BB0u: goto label_444bb0;
            case 0x444BC8u: goto label_444bc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444B48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x444B50u;
label_444b50:
    // 0x444b50: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x444b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444b54: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x444b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x444b58: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x444b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444b5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x444b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444b60: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x444B60u;
    {
        const bool branch_taken_0x444b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444B60u;
        // 0x444b64: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444b60) {
            ctx->pc = 0x444C00u;
            goto label_444c00;
        }
    }
    ctx->pc = 0x444B68u;
label_444b68:
    // 0x444b68: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x444b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444b6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x444b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x444b70: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x444b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444b74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x444b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444b78: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x444B78u;
    {
        const bool branch_taken_0x444b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444B78u;
        // 0x444b7c: 0x8c700008  lw          $s0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444b78) {
            ctx->pc = 0x444C00u;
            goto label_444c00;
        }
    }
    ctx->pc = 0x444B80u;
label_444b80:
    // 0x444b80: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x444b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444b84: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x444b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x444b88: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x444b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444b8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x444b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444b90: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x444B90u;
    {
        const bool branch_taken_0x444b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444B90u;
        // 0x444b94: 0x8c70000c  lw          $s0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444b90) {
            ctx->pc = 0x444C00u;
            goto label_444c00;
        }
    }
    ctx->pc = 0x444B98u;
label_444b98:
    // 0x444b98: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x444b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444b9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x444b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x444ba0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x444ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444ba4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x444ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444ba8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x444BA8u;
    {
        const bool branch_taken_0x444ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444BA8u;
        // 0x444bac: 0x8c700010  lw          $s0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444ba8) {
            ctx->pc = 0x444C00u;
            goto label_444c00;
        }
    }
    ctx->pc = 0x444BB0u;
label_444bb0:
    // 0x444bb0: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x444bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444bb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x444bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x444bb8: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x444bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444bbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x444bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444bc0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x444BC0u;
    {
        const bool branch_taken_0x444bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444BC0u;
        // 0x444bc4: 0x8c700014  lw          $s0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444bc0) {
            ctx->pc = 0x444C00u;
            goto label_444c00;
        }
    }
    ctx->pc = 0x444BC8u;
label_444bc8:
    // 0x444bc8: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x444bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444bcc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x444bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x444bd0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x444bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444bd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x444bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444bd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x444BD8u;
    {
        const bool branch_taken_0x444bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444BD8u;
        // 0x444bdc: 0x8c700018  lw          $s0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444bd8) {
            ctx->pc = 0x444C00u;
            goto label_444c00;
        }
    }
    ctx->pc = 0x444BE0u;
label_444be0:
    // 0x444be0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x444be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x444be4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x444be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444be8: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x444be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x444bec: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x444BECu;
    SET_GPR_U32(ctx, 31, 0x444BF4u);
    ctx->pc = 0x444BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444BECu;
    // 0x444bf0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x444BECu, 0x444BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444BF4u;
label_444bf4:
    // 0x444bf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x444bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444bf8: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x444BF8u;
    SET_GPR_U32(ctx, 31, 0x444C00u);
    ctx->pc = 0x444BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x444BF8u;
    // 0x444bfc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x444BF8u, 0x444C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444C00u;
label_444c00:
    // 0x444c00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x444c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444c04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x444c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x444c08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x444c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x444c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x444C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C0Cu;
        // 0x444c10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444C14u;
    // 0x444c14: 0x0  nop
    ctx->pc = 0x444c14u;
    // NOP
    ctx->pc = 0x444c18u;
}
