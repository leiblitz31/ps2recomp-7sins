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

// Function: sub_001BEAC0
// Address: 0x1beac0 - 0x1bec60
void sub_001BEAC0_0x1beac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEAC0_0x1beac0");
#endif

    switch (ctx->pc) {
        case 0x1beaf4u: goto label_1beaf4;
        case 0x1beb00u: goto label_1beb00;
        case 0x1beb28u: goto label_1beb28;
        case 0x1beb6cu: goto label_1beb6c;
        case 0x1bebb0u: goto label_1bebb0;
        case 0x1bebc4u: goto label_1bebc4;
        case 0x1bebfcu: goto label_1bebfc;
        case 0x1bec10u: goto label_1bec10;
        case 0x1bec20u: goto label_1bec20;
        case 0x1bec34u: goto label_1bec34;
        default: break;
    }

    ctx->pc = 0x1beac0u;

    // 0x1beac0: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x1beac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x1beac4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1beac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1beac8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1beac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1beacc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1beaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bead0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bead0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bead4: 0xafa402b0  sw          $a0, 0x2B0($sp)
    ctx->pc = 0x1bead4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 4));
    // 0x1bead8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1beadc: 0x8c43be58  lw          $v1, -0x41A8($v0)
    ctx->pc = 0x1beadcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1beae0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1beae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1beae4: 0x39042  srl         $s2, $v1, 1
    ctx->pc = 0x1beae4u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1beae8: 0xafa002ac  sw          $zero, 0x2AC($sp)
    ctx->pc = 0x1beae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 0));
    // 0x1beaec: 0xafa002a8  sw          $zero, 0x2A8($sp)
    ctx->pc = 0x1beaecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 0));
    // 0x1beaf0: 0x27b001e0  addiu       $s0, $sp, 0x1E0
    ctx->pc = 0x1beaf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1beaf4:
    // 0x1beaf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1beaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beaf8: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1BEAF8u;
    SET_GPR_U32(ctx, 31, 0x1BEB00u);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1BEAF8u, 0x1BEB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB00u;
label_1beb00:
    // 0x1beb00: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1beb00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1beb04: 0x27a202a0  addiu       $v0, $sp, 0x2A0
    ctx->pc = 0x1beb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x1beb08: 0x0  nop
    ctx->pc = 0x1beb08u;
    // NOP
    // 0x1beb0c: 0x1602fff9  bne         $s0, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BEB0Cu;
    {
        const bool branch_taken_0x1beb0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1beb0c) {
            ctx->pc = 0x1BEAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1beaf4;
        }
    }
    ctx->pc = 0x1BEB14u;
    // 0x1beb14: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1beb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1beb18: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1beb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1beb1c: 0x244508f0  addiu       $a1, $v0, 0x8F0
    ctx->pc = 0x1beb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
    // 0x1beb20: 0xc06eea8  jal         func_1BBAA0
    ctx->pc = 0x1BEB20u;
    SET_GPR_U32(ctx, 31, 0x1BEB28u);
    ctx->pc = 0x1BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAA0u, 0x1BEB20u, 0x1BEB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB28u;
label_1beb28:
    // 0x1beb28: 0x83a20113  lb          $v0, 0x113($sp)
    ctx->pc = 0x1beb28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 275)));
    // 0x1beb2c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1beb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1beb30: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1beb30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1beb34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1beb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1beb38: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEB38u;
    {
        const bool branch_taken_0x1beb38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1beb38) {
            ctx->pc = 0x1BEB4Cu;
            goto label_1beb4c;
        }
    }
    ctx->pc = 0x1BEB40u;
    // 0x1beb40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1beb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1beb44: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1BEB44u;
    {
        const bool branch_taken_0x1beb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beb44) {
            ctx->pc = 0x1BEC40u;
            goto label_1bec40;
        }
    }
    ctx->pc = 0x1BEB4Cu;
label_1beb4c:
    // 0x1beb4c: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x1beb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1beb50: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1beb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1beb54: 0x27a602ac  addiu       $a2, $sp, 0x2AC
    ctx->pc = 0x1beb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
    // 0x1beb58: 0x27a702a8  addiu       $a3, $sp, 0x2A8
    ctx->pc = 0x1beb58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
    // 0x1beb5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1beb5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1beb60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb64: 0xc0700c0  jal         func_1C0300
    ctx->pc = 0x1BEB64u;
    SET_GPR_U32(ctx, 31, 0x1BEB6Cu);
    ctx->pc = 0x1C0300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0300u, 0x1BEB64u, 0x1BEB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB6Cu;
label_1beb6c:
    // 0x1beb6c: 0x8fa302ac  lw          $v1, 0x2AC($sp)
    ctx->pc = 0x1beb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
    // 0x1beb70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1beb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1beb74: 0x38842  srl         $s1, $v1, 1
    ctx->pc = 0x1beb74u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1beb78: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x1beb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1beb7c: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x1beb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x1beb80: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1beb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1beb84: 0x8c42be5c  lw          $v0, -0x41A4($v0)
    ctx->pc = 0x1beb84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE5Cu));
    // 0x1beb88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1beb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1beb8c: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x1beb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x1beb90: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x1beb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1beb94: 0x8fa6011c  lw          $a2, 0x11C($sp)
    ctx->pc = 0x1beb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1beb98: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x1beb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1beb9c: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x1beb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1beba0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1beba0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beba4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1beba4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beba8: 0xc06ff68  jal         func_1BFDA0
    ctx->pc = 0x1BEBA8u;
    SET_GPR_U32(ctx, 31, 0x1BEBB0u);
    ctx->pc = 0x1BFDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFDA0u, 0x1BEBA8u, 0x1BEBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBB0u;
label_1bebb0:
    // 0x1bebb0: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x1bebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bebb4: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1bebb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1bebb8: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1bebb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1bebbc: 0xc06ef34  jal         func_1BBCD0
    ctx->pc = 0x1BEBBCu;
    SET_GPR_U32(ctx, 31, 0x1BEBC4u);
    ctx->pc = 0x1BBCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBCD0u, 0x1BEBBCu, 0x1BEBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBC4u;
label_1bebc4:
    // 0x1bebc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1bebc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bebc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bebcc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEBCCu;
    {
        const bool branch_taken_0x1bebcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bebcc) {
            ctx->pc = 0x1BEBE0u;
            goto label_1bebe0;
        }
    }
    ctx->pc = 0x1BEBD4u;
    // 0x1bebd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bebd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebd8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1BEBD8u;
    {
        const bool branch_taken_0x1bebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bebd8) {
            ctx->pc = 0x1BEC40u;
            goto label_1bec40;
        }
    }
    ctx->pc = 0x1BEBE0u;
label_1bebe0:
    // 0x1bebe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bebe4: 0xa3a20110  sb          $v0, 0x110($sp)
    ctx->pc = 0x1bebe4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bebe8: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bebec: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bebecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bebf0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1bebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1bebf4: 0xc06fb18  jal         func_1BEC60
    ctx->pc = 0x1BEBF4u;
    SET_GPR_U32(ctx, 31, 0x1BEBFCu);
    ctx->pc = 0x1BEC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC60u, 0x1BEBF4u, 0x1BEBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEBFCu;
label_1bebfc:
    // 0x1bebfc: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x1bebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bec00: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1bec00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1bec04: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bec04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bec08: 0xc06fe94  jal         func_1BFA50
    ctx->pc = 0x1BEC08u;
    SET_GPR_U32(ctx, 31, 0x1BEC10u);
    ctx->pc = 0x1BFA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFA50u, 0x1BEC08u, 0x1BEC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC10u;
label_1bec10:
    // 0x1bec10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1bec10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bec14: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x1bec14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bec18: 0xc06f568  jal         func_1BD5A0
    ctx->pc = 0x1BEC18u;
    SET_GPR_U32(ctx, 31, 0x1BEC20u);
    ctx->pc = 0x1BD5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD5A0u, 0x1BEC18u, 0x1BEC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC20u;
label_1bec20:
    // 0x1bec20: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bec24: 0x244408f0  addiu       $a0, $v0, 0x8F0
    ctx->pc = 0x1bec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
    // 0x1bec28: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1bec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bec2c: 0xc06e7c8  jal         func_1B9F20
    ctx->pc = 0x1BEC2Cu;
    SET_GPR_U32(ctx, 31, 0x1BEC34u);
    ctx->pc = 0x1B9F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9F20u, 0x1BEC2Cu, 0x1BEC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC34u;
label_1bec34:
    // 0x1bec34: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x1bec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1bec38: 0xa04000a8  sb          $zero, 0xA8($v0)
    ctx->pc = 0x1bec38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 168), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bec3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bec40:
    // 0x1bec40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bec40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bec44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bec44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bec48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bec48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bec4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bec4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bec50: 0x27bd02c0  addiu       $sp, $sp, 0x2C0
    ctx->pc = 0x1bec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x1bec54: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEC5Cu;
    // 0x1bec5c: 0x0  nop
    ctx->pc = 0x1bec5cu;
    // NOP
    ctx->pc = 0x1bec60u;
}
