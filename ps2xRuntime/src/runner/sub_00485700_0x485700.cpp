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

// Function: sub_00485700
// Address: 0x485700 - 0x485780
void sub_00485700_0x485700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485700_0x485700");
#endif

    switch (ctx->pc) {
        case 0x485738u: goto label_485738;
        case 0x485764u: goto label_485764;
        default: break;
    }

    ctx->pc = 0x485700u;

    // 0x485700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x485700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x485704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x485704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x485708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x485708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48570c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48570cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x485710: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x485710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x485714: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x485714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x485718: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x485718u;
    {
        const bool branch_taken_0x485718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x485718) {
            ctx->pc = 0x485764u;
            goto label_485764;
        }
    }
    ctx->pc = 0x485720u;
    // 0x485720: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x485720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485724: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x485724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x485728: 0x24a55b70  addiu       $a1, $a1, 0x5B70
    ctx->pc = 0x485728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23408));
    // 0x48572c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x48572cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x485730: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x485730u;
    SET_GPR_U32(ctx, 31, 0x485738u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x485730u, 0x485738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485738u;
label_485738:
    // 0x485738: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x485738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48573c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x485740: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x485740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x485744: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x485744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x485748: 0x34431000  ori         $v1, $v0, 0x1000
    ctx->pc = 0x485748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x48574c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x485750: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x485750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x485754: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x485754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x485758: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x485758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48575c: 0xc0c84ac  jal         func_3212B0
    ctx->pc = 0x48575Cu;
    SET_GPR_U32(ctx, 31, 0x485764u);
    ctx->pc = 0x3212B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3212B0u, 0x48575Cu, 0x485764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485764u;
label_485764:
    // 0x485764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x485764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48576c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48576cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x485770: 0x3e00008  jr          $ra
    ctx->pc = 0x485770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485778u;
    // 0x485778: 0x0  nop
    ctx->pc = 0x485778u;
    // NOP
    // 0x48577c: 0x0  nop
    ctx->pc = 0x48577cu;
    // NOP
    ctx->pc = 0x485780u;
}
