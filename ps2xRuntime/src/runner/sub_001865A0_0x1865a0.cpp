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

// Function: sub_001865A0
// Address: 0x1865a0 - 0x186670
void sub_001865A0_0x1865a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001865A0_0x1865a0");
#endif

    switch (ctx->pc) {
        case 0x1865d8u: goto label_1865d8;
        case 0x186608u: goto label_186608;
        case 0x186614u: goto label_186614;
        case 0x186640u: goto label_186640;
        default: break;
    }

    ctx->pc = 0x1865a0u;

    // 0x1865a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1865a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1865a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1865a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1865a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1865a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1865ac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1865acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1865b0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1865b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1865b4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1865b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1865b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1865b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1865bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1865bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1865c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1865c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1865c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1865c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1865c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1865c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1865cc: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1865ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1865d0: 0xc061a18  jal         func_186860
    ctx->pc = 0x1865D0u;
    SET_GPR_U32(ctx, 31, 0x1865D8u);
    ctx->pc = 0x186860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186860u, 0x1865D0u, 0x1865D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1865D8u;
label_1865d8:
    // 0x1865d8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1865D8u;
    {
        const bool branch_taken_0x1865d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1865d8) {
            ctx->pc = 0x18664Cu;
            goto label_18664c;
        }
    }
    ctx->pc = 0x1865E0u;
    // 0x1865e0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1865e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1865e4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1865e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1865e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1865e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1865ec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1865ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1865f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1865f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1865f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1865f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1865f8: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1865f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1865fc: 0x24450084  addiu       $a1, $v0, 0x84
    ctx->pc = 0x1865fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x186600: 0xc0619ec  jal         func_1867B0
    ctx->pc = 0x186600u;
    SET_GPR_U32(ctx, 31, 0x186608u);
    ctx->pc = 0x1867B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1867B0u, 0x186600u, 0x186608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186608u;
label_186608:
    // 0x186608: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x186608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x18660c: 0xc0619e4  jal         func_186790
    ctx->pc = 0x18660Cu;
    SET_GPR_U32(ctx, 31, 0x186614u);
    ctx->pc = 0x186790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186790u, 0x18660Cu, 0x186614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186614u;
label_186614:
    // 0x186614: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x186614u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x186618: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x186618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18661c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x18661cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x186620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186624: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x186624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x186628: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x186628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18662c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186630: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x186630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x186634: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x186634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x186638: 0xc06199c  jal         func_186670
    ctx->pc = 0x186638u;
    SET_GPR_U32(ctx, 31, 0x186640u);
    ctx->pc = 0x186670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186670u, 0x186638u, 0x186640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186640u;
label_186640:
    // 0x186640: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x186640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186644: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186644u;
    {
        const bool branch_taken_0x186644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186644) {
            ctx->pc = 0x186650u;
            goto label_186650;
        }
    }
    ctx->pc = 0x18664Cu;
label_18664c:
    // 0x18664c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18664cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186650:
    // 0x186650: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186654: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186658: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x186658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18665c: 0x3e00008  jr          $ra
    ctx->pc = 0x18665Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18665Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186664u;
    // 0x186664: 0x0  nop
    ctx->pc = 0x186664u;
    // NOP
    // 0x186668: 0x0  nop
    ctx->pc = 0x186668u;
    // NOP
    // 0x18666c: 0x0  nop
    ctx->pc = 0x18666cu;
    // NOP
    ctx->pc = 0x186670u;
}
