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

// Function: sub_00459570
// Address: 0x459570 - 0x459620
void sub_00459570_0x459570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459570_0x459570");
#endif

    switch (ctx->pc) {
        case 0x4595b4u: goto label_4595b4;
        case 0x4595ccu: goto label_4595cc;
        case 0x4595e0u: goto label_4595e0;
        case 0x4595f4u: goto label_4595f4;
        default: break;
    }

    ctx->pc = 0x459570u;

    // 0x459570: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x459570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x459574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x459574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x459578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x459578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45957c: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x45957cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x459580: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x459580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x459584: 0xafa60140  sw          $a2, 0x140($sp)
    ctx->pc = 0x459584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 6));
    // 0x459588: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x459588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45958c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x45958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x459590: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x459590u;
    {
        const bool branch_taken_0x459590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459590) {
            ctx->pc = 0x4595A4u;
            goto label_4595a4;
        }
    }
    ctx->pc = 0x459598u;
    // 0x459598: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x459598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45959c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x45959Cu;
    {
        const bool branch_taken_0x45959c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45959c) {
            ctx->pc = 0x459604u;
            goto label_459604;
        }
    }
    ctx->pc = 0x4595A4u;
label_4595a4:
    // 0x4595a4: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x4595a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x4595a8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4595a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4595ac: 0xc1164fc  jal         func_4593F0
    ctx->pc = 0x4595ACu;
    SET_GPR_U32(ctx, 31, 0x4595B4u);
    ctx->pc = 0x4593F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4593F0u, 0x4595ACu, 0x4595B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4595B4u;
label_4595b4:
    // 0x4595b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4595b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4595b8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4595B8u;
    {
        const bool branch_taken_0x4595b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4595b8) {
            ctx->pc = 0x4595E0u;
            goto label_4595e0;
        }
    }
    ctx->pc = 0x4595C0u;
    // 0x4595c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4595c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4595c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4595C4u;
    {
        const bool branch_taken_0x4595c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4595c4) {
            ctx->pc = 0x459604u;
            goto label_459604;
        }
    }
    ctx->pc = 0x4595CCu;
label_4595cc:
    // 0x4595cc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x4595ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x4595d0: 0x2484e8d0  addiu       $a0, $a0, -0x1730
    ctx->pc = 0x4595d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961360));
    // 0x4595d4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4595d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4595d8: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x4595D8u;
    SET_GPR_U32(ctx, 31, 0x4595E0u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x4595D8u, 0x4595E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4595E0u;
label_4595e0:
    // 0x4595e0: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x4595e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x4595e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4595e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4595e8: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x4595e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x4595ec: 0xc0c1b58  jal         func_306D60
    ctx->pc = 0x4595ECu;
    SET_GPR_U32(ctx, 31, 0x4595F4u);
    ctx->pc = 0x306D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306D60u, 0x4595ECu, 0x4595F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4595F4u;
label_4595f4:
    // 0x4595f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4595f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4595f8: 0x440fff4  bltz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4595F8u;
    {
        const bool branch_taken_0x4595f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4595f8) {
            ctx->pc = 0x4595CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4595cc;
        }
    }
    ctx->pc = 0x459600u;
    // 0x459600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x459600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_459604:
    // 0x459604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x459604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x459608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45960c: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x45960cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x459610: 0x3e00008  jr          $ra
    ctx->pc = 0x459610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459618u;
    // 0x459618: 0x0  nop
    ctx->pc = 0x459618u;
    // NOP
    // 0x45961c: 0x0  nop
    ctx->pc = 0x45961cu;
    // NOP
    ctx->pc = 0x459620u;
}
