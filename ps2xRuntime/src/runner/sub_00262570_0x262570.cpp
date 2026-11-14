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

// Function: sub_00262570
// Address: 0x262570 - 0x2626f0
void sub_00262570_0x262570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262570_0x262570");
#endif

    switch (ctx->pc) {
        case 0x26258cu: goto label_26258c;
        case 0x26259cu: goto label_26259c;
        case 0x2625b0u: goto label_2625b0;
        case 0x2625f0u: goto label_2625f0;
        case 0x262604u: goto label_262604;
        case 0x262610u: goto label_262610;
        case 0x262628u: goto label_262628;
        case 0x262634u: goto label_262634;
        case 0x26264cu: goto label_26264c;
        case 0x262664u: goto label_262664;
        case 0x262674u: goto label_262674;
        case 0x262680u: goto label_262680;
        case 0x262698u: goto label_262698;
        case 0x2626a4u: goto label_2626a4;
        case 0x2626bcu: goto label_2626bc;
        case 0x2626d4u: goto label_2626d4;
        default: break;
    }

    ctx->pc = 0x262570u;

    // 0x262570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x262574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x262574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x262578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26257c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26257cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x262580: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x262580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262584: 0xc07ce3c  jal         func_1F38F0
    ctx->pc = 0x262584u;
    SET_GPR_U32(ctx, 31, 0x26258Cu);
    ctx->pc = 0x1F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38F0u, 0x262584u, 0x26258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26258Cu;
label_26258c:
    // 0x26258c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26258cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262590: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x262590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262594: 0xc07ceb8  jal         func_1F3AE0
    ctx->pc = 0x262594u;
    SET_GPR_U32(ctx, 31, 0x26259Cu);
    ctx->pc = 0x1F3AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3AE0u, 0x262594u, 0x26259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26259Cu;
label_26259c:
    // 0x26259c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x26259cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2625a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2625a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2625a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2625a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2625a8: 0xc07ce9c  jal         func_1F3A70
    ctx->pc = 0x2625A8u;
    SET_GPR_U32(ctx, 31, 0x2625B0u);
    ctx->pc = 0x1F3A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3A70u, 0x2625A8u, 0x2625B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625B0u;
label_2625b0:
    // 0x2625b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2625b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2625b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2625b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2625b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2625b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2625bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2625BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2625BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2625C4u;
    // 0x2625c4: 0x0  nop
    ctx->pc = 0x2625c4u;
    // NOP
    // 0x2625c8: 0x0  nop
    ctx->pc = 0x2625c8u;
    // NOP
    // 0x2625cc: 0x0  nop
    ctx->pc = 0x2625ccu;
    // NOP
    // 0x2625d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2625d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2625d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2625d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2625d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2625d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2625dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2625dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2625e0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2625e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2625e4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2625e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2625e8: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x2625E8u;
    SET_GPR_U32(ctx, 31, 0x2625F0u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x2625E8u, 0x2625F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2625F0u;
label_2625f0:
    // 0x2625f0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2625f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2625f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2625f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2625f8: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x2625f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2625fc: 0xc098954  jal         func_262550
    ctx->pc = 0x2625FCu;
    SET_GPR_U32(ctx, 31, 0x262604u);
    ctx->pc = 0x262550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262550u, 0x2625FCu, 0x262604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262604u;
label_262604:
    // 0x262604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x262604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262608: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x262608u;
    {
        const bool branch_taken_0x262608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262608) {
            ctx->pc = 0x26263Cu;
            goto label_26263c;
        }
    }
    ctx->pc = 0x262610u;
label_262610:
    // 0x262610: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x262610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x262614: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x262614u;
    {
        const bool branch_taken_0x262614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262614) {
            ctx->pc = 0x262638u;
            goto label_262638;
        }
    }
    ctx->pc = 0x26261Cu;
    // 0x26261c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26261cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x262620: 0xc0989bc  jal         func_2626F0
    ctx->pc = 0x262620u;
    SET_GPR_U32(ctx, 31, 0x262628u);
    ctx->pc = 0x2626F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2626F0u, 0x262620u, 0x262628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262628u;
label_262628:
    // 0x262628: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x262628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26262c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x26262Cu;
    SET_GPR_U32(ctx, 31, 0x262634u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x26262Cu, 0x262634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262634u;
label_262634:
    // 0x262634: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x262634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_262638:
    // 0x262638: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x262638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_26263c:
    // 0x26263c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262640: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x262640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x262644: 0xc09894c  jal         func_262530
    ctx->pc = 0x262644u;
    SET_GPR_U32(ctx, 31, 0x26264Cu);
    ctx->pc = 0x262530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262530u, 0x262644u, 0x26264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26264Cu;
label_26264c:
    // 0x26264c: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x26264Cu;
    {
        const bool branch_taken_0x26264c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26264c) {
            ctx->pc = 0x262610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262610;
        }
    }
    ctx->pc = 0x262654u;
    // 0x262654: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x262654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262658: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x262658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x26265c: 0xc098908  jal         func_262420
    ctx->pc = 0x26265Cu;
    SET_GPR_U32(ctx, 31, 0x262664u);
    ctx->pc = 0x262420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262420u, 0x26265Cu, 0x262664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262664u;
label_262664:
    // 0x262664: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x262664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262668: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x262668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x26266c: 0xc098954  jal         func_262550
    ctx->pc = 0x26266Cu;
    SET_GPR_U32(ctx, 31, 0x262674u);
    ctx->pc = 0x262550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262550u, 0x26266Cu, 0x262674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262674u;
label_262674:
    // 0x262674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x262674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262678: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x262678u;
    {
        const bool branch_taken_0x262678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262678) {
            ctx->pc = 0x2626ACu;
            goto label_2626ac;
        }
    }
    ctx->pc = 0x262680u;
label_262680:
    // 0x262680: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x262680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x262684: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x262684u;
    {
        const bool branch_taken_0x262684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262684) {
            ctx->pc = 0x2626A8u;
            goto label_2626a8;
        }
    }
    ctx->pc = 0x26268Cu;
    // 0x26268c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26268cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x262690: 0xc0989bc  jal         func_2626F0
    ctx->pc = 0x262690u;
    SET_GPR_U32(ctx, 31, 0x262698u);
    ctx->pc = 0x2626F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2626F0u, 0x262690u, 0x262698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262698u;
label_262698:
    // 0x262698: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x262698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26269c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x26269Cu;
    SET_GPR_U32(ctx, 31, 0x2626A4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x26269Cu, 0x2626A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626A4u;
label_2626a4:
    // 0x2626a4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2626a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2626a8:
    // 0x2626a8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2626a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2626ac:
    // 0x2626ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2626acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2626b0: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x2626b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x2626b4: 0xc09894c  jal         func_262530
    ctx->pc = 0x2626B4u;
    SET_GPR_U32(ctx, 31, 0x2626BCu);
    ctx->pc = 0x262530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262530u, 0x2626B4u, 0x2626BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626BCu;
label_2626bc:
    // 0x2626bc: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2626BCu;
    {
        const bool branch_taken_0x2626bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2626bc) {
            ctx->pc = 0x262680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262680;
        }
    }
    ctx->pc = 0x2626C4u;
    // 0x2626c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2626c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2626c8: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x2626c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x2626cc: 0xc098908  jal         func_262420
    ctx->pc = 0x2626CCu;
    SET_GPR_U32(ctx, 31, 0x2626D4u);
    ctx->pc = 0x262420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262420u, 0x2626CCu, 0x2626D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626D4u;
label_2626d4:
    // 0x2626d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2626d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2626d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2626d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2626dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2626dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2626e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2626e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2626e4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2626e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2626e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2626E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2626E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2626F0u;
}
