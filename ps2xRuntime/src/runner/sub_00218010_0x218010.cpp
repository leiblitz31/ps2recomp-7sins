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

// Function: sub_00218010
// Address: 0x218010 - 0x218120
void sub_00218010_0x218010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218010_0x218010");
#endif

    switch (ctx->pc) {
        case 0x218044u: goto label_218044;
        case 0x218058u: goto label_218058;
        case 0x21807cu: goto label_21807c;
        case 0x218098u: goto label_218098;
        case 0x2180b0u: goto label_2180b0;
        case 0x2180d8u: goto label_2180d8;
        case 0x2180e8u: goto label_2180e8;
        case 0x218104u: goto label_218104;
        default: break;
    }

    ctx->pc = 0x218010u;

    // 0x218010: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x218010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x218014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x218014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x218018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x218018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21801c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x218020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x218020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x218024: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x218024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x218028: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x218028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x21802c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x21802cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x218030: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x218030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x218034: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x218034u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x218038: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x218038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21803c: 0xc085f5c  jal         func_217D70
    ctx->pc = 0x21803Cu;
    SET_GPR_U32(ctx, 31, 0x218044u);
    ctx->pc = 0x217D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D70u, 0x21803Cu, 0x218044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218044u;
label_218044:
    // 0x218044: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x218044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x218048: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x218048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x21804c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x21804cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x218050: 0xc041954  jal         func_106550
    ctx->pc = 0x218050u;
    SET_GPR_U32(ctx, 31, 0x218058u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x218050u, 0x218058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218058u;
label_218058:
    // 0x218058: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x218058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x21805c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218060: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x218060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218064: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x218064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218068: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x218068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x21806c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21806cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218070: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x218070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218074: 0xc086158  jal         func_218560
    ctx->pc = 0x218074u;
    SET_GPR_U32(ctx, 31, 0x21807Cu);
    ctx->pc = 0x218560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218560u, 0x218074u, 0x21807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21807Cu;
label_21807c:
    // 0x21807c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21807cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218080: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x218080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218084: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x218084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218088: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x218088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21808c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21808cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218090: 0xc041934  jal         func_1064D0
    ctx->pc = 0x218090u;
    SET_GPR_U32(ctx, 31, 0x218098u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x218090u, 0x218098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218098u;
label_218098:
    // 0x218098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x218098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21809c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21809cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180a0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2180a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2180a4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2180a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2180a8: 0xc08607c  jal         func_2181F0
    ctx->pc = 0x2180A8u;
    SET_GPR_U32(ctx, 31, 0x2180B0u);
    ctx->pc = 0x2181F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2181F0u, 0x2180A8u, 0x2180B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180B0u;
label_2180b0:
    // 0x2180b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2180b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180b4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2180b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2180b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2180B8u;
    {
        const bool branch_taken_0x2180b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2180b8) {
            ctx->pc = 0x2180DCu;
            goto label_2180dc;
        }
    }
    ctx->pc = 0x2180C0u;
    // 0x2180c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2180c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2180c4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2180c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2180c8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2180c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2180cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2180ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180d0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2180D0u;
    SET_GPR_U32(ctx, 31, 0x2180D8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2180D0u, 0x2180D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180D8u;
label_2180d8:
    // 0x2180d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2180d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2180dc:
    // 0x2180dc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2180dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2180e0: 0xc08605c  jal         func_218170
    ctx->pc = 0x2180E0u;
    SET_GPR_U32(ctx, 31, 0x2180E8u);
    ctx->pc = 0x218170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218170u, 0x2180E0u, 0x2180E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180E8u;
label_2180e8:
    // 0x2180e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2180e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2180ec: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2180ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2180f0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2180f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2180f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2180f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2180f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2180fc: 0xc086048  jal         func_218120
    ctx->pc = 0x2180FCu;
    SET_GPR_U32(ctx, 31, 0x218104u);
    ctx->pc = 0x218120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218120u, 0x2180FCu, 0x218104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218104u;
label_218104:
    // 0x218104: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x218104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218108: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x218108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21810c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21810cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x218110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218114: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x218114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x218118: 0x3e00008  jr          $ra
    ctx->pc = 0x218118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218120u;
}
