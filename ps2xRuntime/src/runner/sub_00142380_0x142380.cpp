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

// Function: sub_00142380
// Address: 0x142380 - 0x1423e0
void sub_00142380_0x142380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142380_0x142380");
#endif

    switch (ctx->pc) {
        case 0x142380u: goto label_142380;
        case 0x142384u: goto label_142384;
        case 0x142388u: goto label_142388;
        case 0x14238cu: goto label_14238c;
        case 0x142390u: goto label_142390;
        case 0x142394u: goto label_142394;
        case 0x142398u: goto label_142398;
        case 0x14239cu: goto label_14239c;
        case 0x1423a0u: goto label_1423a0;
        case 0x1423a4u: goto label_1423a4;
        case 0x1423a8u: goto label_1423a8;
        case 0x1423acu: goto label_1423ac;
        case 0x1423b0u: goto label_1423b0;
        case 0x1423b4u: goto label_1423b4;
        case 0x1423b8u: goto label_1423b8;
        case 0x1423bcu: goto label_1423bc;
        case 0x1423c0u: goto label_1423c0;
        case 0x1423c4u: goto label_1423c4;
        case 0x1423c8u: goto label_1423c8;
        case 0x1423ccu: goto label_1423cc;
        case 0x1423d0u: goto label_1423d0;
        case 0x1423d4u: goto label_1423d4;
        case 0x1423d8u: goto label_1423d8;
        case 0x1423dcu: goto label_1423dc;
        default: break;
    }

    ctx->pc = 0x142380u;

label_142380:
    // 0x142380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x142380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_142384:
    // 0x142384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_142388:
    // 0x142388: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x142388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_14238c:
    // 0x14238c: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x14238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_142390:
    // 0x142390: 0x1002000e  beq         $zero, $v0, . + 4 + (0xE << 2)
label_142394:
    if (ctx->pc == 0x142394u) {
        ctx->pc = 0x142398u;
        goto label_142398;
    }
    ctx->pc = 0x142390u;
    {
        const bool branch_taken_0x142390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x142390) {
            ctx->pc = 0x1423CCu;
            goto label_1423cc;
        }
    }
    ctx->pc = 0x142398u;
label_142398:
    // 0x142398: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x142398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_14239c:
    // 0x14239c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x14239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1423a0:
    // 0x1423a0: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_1423a4:
    if (ctx->pc == 0x1423A4u) {
        ctx->pc = 0x1423A8u;
        goto label_1423a8;
    }
    ctx->pc = 0x1423A0u;
    {
        const bool branch_taken_0x1423a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1423a0) {
            ctx->pc = 0x1423CCu;
            goto label_1423cc;
        }
    }
    ctx->pc = 0x1423A8u;
label_1423a8:
    // 0x1423a8: 0x8f83ba84  lw          $v1, -0x457C($gp)
    ctx->pc = 0x1423a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_1423ac:
    // 0x1423ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1423acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1423b0:
    // 0x1423b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1423b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1423b4:
    // 0x1423b4: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1423b4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1423b8:
    // 0x1423b8: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x1423b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1423bc:
    // 0x1423bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1423bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1423c0:
    // 0x1423c0: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x1423c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_1423c4:
    // 0x1423c4: 0x320f809  jalr        $t9
label_1423c8:
    if (ctx->pc == 0x1423C8u) {
        ctx->pc = 0x1423CCu;
        goto label_1423cc;
    }
    ctx->pc = 0x1423C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1423CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1423C4u, 0x1423CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1423CCu;
label_1423cc:
    // 0x1423cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1423ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1423d0:
    // 0x1423d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1423d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1423d4:
    // 0x1423d4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1423d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1423d8:
    // 0x1423d8: 0x3e00008  jr          $ra
label_1423dc:
    if (ctx->pc == 0x1423DCu) {
        ctx->pc = 0x1423E0u;
        goto label_fallthrough_0x1423d8;
    }
    ctx->pc = 0x1423D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1423D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1423d8:
    ctx->pc = 0x1423E0u;
}
