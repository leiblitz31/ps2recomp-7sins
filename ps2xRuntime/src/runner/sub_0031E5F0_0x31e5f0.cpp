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

// Function: sub_0031E5F0
// Address: 0x31e5f0 - 0x31e660
void sub_0031E5F0_0x31e5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E5F0_0x31e5f0");
#endif

    switch (ctx->pc) {
        case 0x31e61cu: goto label_31e61c;
        case 0x31e634u: goto label_31e634;
        case 0x31e644u: goto label_31e644;
        default: break;
    }

    ctx->pc = 0x31e5f0u;

    // 0x31e5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31e5f4: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x31e5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x31e5f8: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x31e5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x31e5fc: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x31e5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x31e600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31e604: 0x24c6e978  addiu       $a2, $a2, -0x1688
    ctx->pc = 0x31e604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961528));
    // 0x31e608: 0x24e7e998  addiu       $a3, $a3, -0x1668
    ctx->pc = 0x31e608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961560));
    // 0x31e60c: 0x2508ea08  addiu       $t0, $t0, -0x15F8
    ctx->pc = 0x31e60cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961672));
    // 0x31e610: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x31e610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x31e614: 0xc0e28ec  jal         func_38A3B0
    ctx->pc = 0x31E614u;
    SET_GPR_U32(ctx, 31, 0x31E61Cu);
    ctx->pc = 0x31E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E614u;
    // 0x31e618: 0x24050122  addiu       $a1, $zero, 0x122 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x31E614u, 0x31E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E61Cu;
label_31e61c:
    // 0x31e61c: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31E61Cu;
    {
        const bool branch_taken_0x31e61c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E61Cu;
        // 0x31e620: 0xaf82a5cc  sw          $v0, -0x5A34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e61c) {
            ctx->pc = 0x31E64Cu;
            goto label_31e64c;
        }
    }
    ctx->pc = 0x31E624u;
    // 0x31e624: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31e624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x31e628: 0x24040122  addiu       $a0, $zero, 0x122
    ctx->pc = 0x31e628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x31e62c: 0xc0e291e  jal         func_38A478
    ctx->pc = 0x31E62Cu;
    SET_GPR_U32(ctx, 31, 0x31E634u);
    ctx->pc = 0x31E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E62Cu;
    // 0x31e630: 0x24a5eb28  addiu       $a1, $a1, -0x14D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A478u, 0x31E62Cu, 0x31E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E634u;
label_31e634:
    // 0x31e634: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31e634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x31e638: 0x24040122  addiu       $a0, $zero, 0x122
    ctx->pc = 0x31e638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x31e63c: 0xc0e2928  jal         func_38A4A0
    ctx->pc = 0x31E63Cu;
    SET_GPR_U32(ctx, 31, 0x31E644u);
    ctx->pc = 0x31E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E63Cu;
    // 0x31e640: 0x24a5eb68  addiu       $a1, $a1, -0x1498 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A4A0u, 0x31E63Cu, 0x31E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E644u;
label_31e644:
    // 0x31e644: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31E644u;
    {
        const bool branch_taken_0x31e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E644u;
        // 0x31e648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e644) {
            ctx->pc = 0x31E650u;
            goto label_31e650;
        }
    }
    ctx->pc = 0x31E64Cu;
label_31e64c:
    // 0x31e64c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31e64cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e650:
    // 0x31e650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e654: 0x3e00008  jr          $ra
    ctx->pc = 0x31E654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E654u;
        // 0x31e658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E65Cu;
    // 0x31e65c: 0x0  nop
    ctx->pc = 0x31e65cu;
    // NOP
    ctx->pc = 0x31e660u;
}
