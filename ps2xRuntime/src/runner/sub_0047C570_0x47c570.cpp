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

// Function: sub_0047C570
// Address: 0x47c570 - 0x47c660
void sub_0047C570_0x47c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C570_0x47c570");
#endif

    switch (ctx->pc) {
        case 0x47c5ecu: goto label_47c5ec;
        case 0x47c608u: goto label_47c608;
        case 0x47c628u: goto label_47c628;
        default: break;
    }

    ctx->pc = 0x47c570u;

    // 0x47c570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47c570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47c574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47c574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47c578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47c578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47c57c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x47c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x47c580: 0xa382c083  sb          $v0, -0x3F7D($gp)
    ctx->pc = 0x47c580u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294951043), (uint8_t)GPR_U32(ctx, 2));
    // 0x47c584: 0xaf80c078  sw          $zero, -0x3F88($gp)
    ctx->pc = 0x47c584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951032), GPR_U32(ctx, 0));
    // 0x47c588: 0xaf80c07c  sw          $zero, -0x3F84($gp)
    ctx->pc = 0x47c588u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951036), GPR_U32(ctx, 0));
    // 0x47c58c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47c590: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x47C590u;
    {
        const bool branch_taken_0x47c590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47c590) {
            ctx->pc = 0x47C5B0u;
            goto label_47c5b0;
        }
    }
    ctx->pc = 0x47C598u;
    // 0x47c598: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x47c598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x47c59c: 0xaf82c09c  sw          $v0, -0x3F64($gp)
    ctx->pc = 0x47c59cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951068), GPR_U32(ctx, 2));
    // 0x47c5a0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x47c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x47c5a4: 0xaf82c090  sw          $v0, -0x3F70($gp)
    ctx->pc = 0x47c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951056), GPR_U32(ctx, 2));
    // 0x47c5a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x47C5A8u;
    {
        const bool branch_taken_0x47c5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c5a8) {
            ctx->pc = 0x47C5C8u;
            goto label_47c5c8;
        }
    }
    ctx->pc = 0x47C5B0u;
label_47c5b0:
    // 0x47c5b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47c5b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47c5b8: 0xaf82c09c  sw          $v0, -0x3F64($gp)
    ctx->pc = 0x47c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951068), GPR_U32(ctx, 2));
    // 0x47c5bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47c5c0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x47c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47c5c4: 0xaf82c090  sw          $v0, -0x3F70($gp)
    ctx->pc = 0x47c5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951056), GPR_U32(ctx, 2));
label_47c5c8:
    // 0x47c5c8: 0xaf80c094  sw          $zero, -0x3F6C($gp)
    ctx->pc = 0x47c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951060), GPR_U32(ctx, 0));
    // 0x47c5cc: 0xaf80c0a0  sw          $zero, -0x3F60($gp)
    ctx->pc = 0x47c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951072), GPR_U32(ctx, 0));
    // 0x47c5d0: 0xaf80c0a8  sw          $zero, -0x3F58($gp)
    ctx->pc = 0x47c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951080), GPR_U32(ctx, 0));
    // 0x47c5d4: 0x8f83c090  lw          $v1, -0x3F70($gp)
    ctx->pc = 0x47c5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951056)));
    // 0x47c5d8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47c5dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47c5e0: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x47c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x47c5e4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x47C5E4u;
    SET_GPR_U32(ctx, 31, 0x47C5ECu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x47C5E4u, 0x47C5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C5ECu;
label_47c5ec:
    // 0x47c5ec: 0xaf82c098  sw          $v0, -0x3F68($gp)
    ctx->pc = 0x47c5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951064), GPR_U32(ctx, 2));
    // 0x47c5f0: 0x8f83c09c  lw          $v1, -0x3F64($gp)
    ctx->pc = 0x47c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951068)));
    // 0x47c5f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47c5f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47c5fc: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x47c5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x47c600: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x47C600u;
    SET_GPR_U32(ctx, 31, 0x47C608u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x47C600u, 0x47C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C608u;
label_47c608:
    // 0x47c608: 0xaf82c0a4  sw          $v0, -0x3F5C($gp)
    ctx->pc = 0x47c608u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951076), GPR_U32(ctx, 2));
    // 0x47c60c: 0x8f82c09c  lw          $v0, -0x3F64($gp)
    ctx->pc = 0x47c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951068)));
    // 0x47c610: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x47c610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x47c614: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47c614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x47c618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47c618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47c61c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x47c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x47c620: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x47C620u;
    SET_GPR_U32(ctx, 31, 0x47C628u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x47C620u, 0x47C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C628u;
label_47c628:
    // 0x47c628: 0xaf82c0ac  sw          $v0, -0x3F54($gp)
    ctx->pc = 0x47c628u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951084), GPR_U32(ctx, 2));
    // 0x47c62c: 0xaf80c084  sw          $zero, -0x3F7C($gp)
    ctx->pc = 0x47c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951044), GPR_U32(ctx, 0));
    // 0x47c630: 0xaf80c088  sw          $zero, -0x3F78($gp)
    ctx->pc = 0x47c630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951048), GPR_U32(ctx, 0));
    // 0x47c634: 0xaf80c08c  sw          $zero, -0x3F74($gp)
    ctx->pc = 0x47c634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951052), GPR_U32(ctx, 0));
    // 0x47c638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47c638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47c63c: 0xaf82c074  sw          $v0, -0x3F8C($gp)
    ctx->pc = 0x47c63cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951028), GPR_U32(ctx, 2));
    // 0x47c640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47c640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47c644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47c644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47c648: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x47c648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47c64c: 0x3e00008  jr          $ra
    ctx->pc = 0x47C64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C654u;
    // 0x47c654: 0x0  nop
    ctx->pc = 0x47c654u;
    // NOP
    // 0x47c658: 0x0  nop
    ctx->pc = 0x47c658u;
    // NOP
    // 0x47c65c: 0x0  nop
    ctx->pc = 0x47c65cu;
    // NOP
    ctx->pc = 0x47c660u;
}
