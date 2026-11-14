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

// Function: sub_004873D0
// Address: 0x4873d0 - 0x487460
void sub_004873D0_0x4873d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004873D0_0x4873d0");
#endif

    switch (ctx->pc) {
        case 0x4873e8u: goto label_4873e8;
        default: break;
    }

    ctx->pc = 0x4873d0u;

    // 0x4873d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4873d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4873d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4873d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4873d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4873d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4873dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4873dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4873e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4873E0u;
    {
        const bool branch_taken_0x4873e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4873e0) {
            ctx->pc = 0x487438u;
            goto label_487438;
        }
    }
    ctx->pc = 0x4873E8u;
label_4873e8:
    // 0x4873e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4873e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4873ec: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x4873ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4873f0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4873f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4873f4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x4873f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4873f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4873f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4873fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4873fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x487400: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x487400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x487404: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x487404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x487408: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x487408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x48740c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x48740cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x487410: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x487410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487414: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x487414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x487418: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x487418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x48741c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x48741cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x487420: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x487420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x487424: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x487424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x487428: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x487428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48742c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48742cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x487430: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x487430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x487434: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x487434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_487438:
    // 0x487438: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x487438u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x48743c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x48743Cu;
    {
        const bool branch_taken_0x48743c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48743c) {
            ctx->pc = 0x4873E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4873e8;
        }
    }
    ctx->pc = 0x487444u;
    // 0x487444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x487444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487448: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x487448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48744c: 0x3e00008  jr          $ra
    ctx->pc = 0x48744Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48744Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x487454u;
    // 0x487454: 0x0  nop
    ctx->pc = 0x487454u;
    // NOP
    // 0x487458: 0x0  nop
    ctx->pc = 0x487458u;
    // NOP
    // 0x48745c: 0x0  nop
    ctx->pc = 0x48745cu;
    // NOP
    ctx->pc = 0x487460u;
}
