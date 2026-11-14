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

// Function: sub_00429FF0
// Address: 0x429ff0 - 0x42a088
void sub_00429FF0_0x429ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429FF0_0x429ff0");
#endif

    switch (ctx->pc) {
        case 0x42a00cu: goto label_42a00c;
        case 0x42a024u: goto label_42a024;
        case 0x42a03cu: goto label_42a03c;
        case 0x42a050u: goto label_42a050;
        case 0x42a060u: goto label_42a060;
        case 0x42a070u: goto label_42a070;
        default: break;
    }

    ctx->pc = 0x429ff0u;

    // 0x429ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x429ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x429ff4: 0x9382adfe  lbu         $v0, -0x5202($gp)
    ctx->pc = 0x429ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946302)));
    // 0x429ff8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x429ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x429ffc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x429FFCu;
    {
        const bool branch_taken_0x429ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429FFCu;
        // 0x42a000: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429ffc) {
            ctx->pc = 0x42A010u;
            goto label_42a010;
        }
    }
    ctx->pc = 0x42A004u;
    // 0x42a004: 0xc0bf9c4  jal         func_2FE710
    ctx->pc = 0x42A004u;
    SET_GPR_U32(ctx, 31, 0x42A00Cu);
    ctx->pc = 0x42A008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A004u;
    // 0x42a008: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE710u, 0x42A004u, 0x42A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A00Cu;
label_42a00c:
    // 0x42a00c: 0xa380adfe  sb          $zero, -0x5202($gp)
    ctx->pc = 0x42a00cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294946302), (uint8_t)GPR_U32(ctx, 0));
label_42a010:
    // 0x42a010: 0x9382adfd  lbu         $v0, -0x5203($gp)
    ctx->pc = 0x42a010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946301)));
    // 0x42a014: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42A014u;
    {
        const bool branch_taken_0x42a014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A014u;
        // 0x42a018: 0x9382adfc  lbu         $v0, -0x5204($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a014) {
            ctx->pc = 0x42A02Cu;
            goto label_42a02c;
        }
    }
    ctx->pc = 0x42A01Cu;
    // 0x42a01c: 0xc0bf9c4  jal         func_2FE710
    ctx->pc = 0x42A01Cu;
    SET_GPR_U32(ctx, 31, 0x42A024u);
    ctx->pc = 0x42A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A01Cu;
    // 0x42a020: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE710u, 0x42A01Cu, 0x42A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A024u;
label_42a024:
    // 0x42a024: 0xa380adfd  sb          $zero, -0x5203($gp)
    ctx->pc = 0x42a024u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294946301), (uint8_t)GPR_U32(ctx, 0));
    // 0x42a028: 0x9382adfc  lbu         $v0, -0x5204($gp)
    ctx->pc = 0x42a028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946300)));
label_42a02c:
    // 0x42a02c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42A02Cu;
    {
        const bool branch_taken_0x42a02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A02Cu;
        // 0x42a030: 0x8f85adf8  lw          $a1, -0x5208($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a02c) {
            ctx->pc = 0x42A044u;
            goto label_42a044;
        }
    }
    ctx->pc = 0x42A034u;
    // 0x42a034: 0xc0bf990  jal         func_2FE640
    ctx->pc = 0x42A034u;
    SET_GPR_U32(ctx, 31, 0x42A03Cu);
    ctx->pc = 0x42A038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A034u;
    // 0x42a038: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE640u, 0x42A034u, 0x42A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A03Cu;
label_42a03c:
    // 0x42a03c: 0xa380adfc  sb          $zero, -0x5204($gp)
    ctx->pc = 0x42a03cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294946300), (uint8_t)GPR_U32(ctx, 0));
    // 0x42a040: 0x8f85adf8  lw          $a1, -0x5208($gp)
    ctx->pc = 0x42a040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946296)));
label_42a044:
    // 0x42a044: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x42a044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x42a048: 0xc0bf624  jal         func_2FD890
    ctx->pc = 0x42A048u;
    SET_GPR_U32(ctx, 31, 0x42A050u);
    ctx->pc = 0x42A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A048u;
    // 0x42a04c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD890u, 0x42A048u, 0x42A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A050u;
label_42a050:
    // 0x42a050: 0x8f85adf4  lw          $a1, -0x520C($gp)
    ctx->pc = 0x42a050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946292)));
    // 0x42a054: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42a054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42a058: 0xc0bf624  jal         func_2FD890
    ctx->pc = 0x42A058u;
    SET_GPR_U32(ctx, 31, 0x42A060u);
    ctx->pc = 0x42A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A058u;
    // 0x42a05c: 0xaf90adf8  sw          $s0, -0x5208($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946296), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD890u, 0x42A058u, 0x42A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A060u;
label_42a060:
    // 0x42a060: 0x8f85adf0  lw          $a1, -0x5210($gp)
    ctx->pc = 0x42a060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946288)));
    // 0x42a064: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x42a064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x42a068: 0xc0bf618  jal         func_2FD860
    ctx->pc = 0x42A068u;
    SET_GPR_U32(ctx, 31, 0x42A070u);
    ctx->pc = 0x42A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A068u;
    // 0x42a06c: 0xaf90adf4  sw          $s0, -0x520C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946292), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD860u, 0x42A068u, 0x42A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A070u;
label_42a070:
    // 0x42a070: 0xaf90adf0  sw          $s0, -0x5210($gp)
    ctx->pc = 0x42a070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946288), GPR_U32(ctx, 16));
    // 0x42a074: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x42a074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42a078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42a078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42a07c: 0x3e00008  jr          $ra
    ctx->pc = 0x42A07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A07Cu;
        // 0x42a080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42A084u;
    // 0x42a084: 0x0  nop
    ctx->pc = 0x42a084u;
    // NOP
    ctx->pc = 0x42a088u;
}
