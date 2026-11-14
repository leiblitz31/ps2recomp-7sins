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

// Function: sub_00459140
// Address: 0x459140 - 0x4591c0
void sub_00459140_0x459140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459140_0x459140");
#endif

    switch (ctx->pc) {
        case 0x459180u: goto label_459180;
        case 0x459198u: goto label_459198;
        case 0x4591acu: goto label_4591ac;
        default: break;
    }

    ctx->pc = 0x459140u;

    // 0x459140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x459140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x459144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459148: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x459148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45914c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45914cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459150: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x459150u;
    {
        const bool branch_taken_0x459150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x459150) {
            ctx->pc = 0x4591ACu;
            goto label_4591ac;
        }
    }
    ctx->pc = 0x459158u;
    // 0x459158: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45915c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x45915cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x459160: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x459160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x459164: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459168: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x459168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x45916c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45916cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x459170: 0x248440c0  addiu       $a0, $a0, 0x40C0
    ctx->pc = 0x459170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    // 0x459174: 0x2785b0e8  addiu       $a1, $gp, -0x4F18
    ctx->pc = 0x459174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947048));
    // 0x459178: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x459178u;
    SET_GPR_U32(ctx, 31, 0x459180u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x459178u, 0x459180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459180u;
label_459180:
    // 0x459180: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459184: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x459184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x459188: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x459188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x45918c: 0x24a5e7b0  addiu       $a1, $a1, -0x1850
    ctx->pc = 0x45918cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961072));
    // 0x459190: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x459190u;
    SET_GPR_U32(ctx, 31, 0x459198u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x459190u, 0x459198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459198u;
label_459198:
    // 0x459198: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45919c: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x45919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x4591a0: 0x2785b0f0  addiu       $a1, $gp, -0x4F10
    ctx->pc = 0x4591a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947056));
    // 0x4591a4: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x4591A4u;
    SET_GPR_U32(ctx, 31, 0x4591ACu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x4591A4u, 0x4591ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4591ACu;
label_4591ac:
    // 0x4591ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4591acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4591b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4591b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4591b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4591B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4591B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4591BCu;
    // 0x4591bc: 0x0  nop
    ctx->pc = 0x4591bcu;
    // NOP
    ctx->pc = 0x4591c0u;
}
