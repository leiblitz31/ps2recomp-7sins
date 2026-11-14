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

// Function: sub_002997C0
// Address: 0x2997c0 - 0x2998a0
void sub_002997C0_0x2997c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002997C0_0x2997c0");
#endif

    switch (ctx->pc) {
        case 0x299820u: goto label_299820;
        case 0x299838u: goto label_299838;
        case 0x29985cu: goto label_29985c;
        case 0x299878u: goto label_299878;
        default: break;
    }

    ctx->pc = 0x2997c0u;

    // 0x2997c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2997c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2997c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2997c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2997c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2997c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2997cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2997ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2997d0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2997d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2997d4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2997d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2997d8: 0x24636140  addiu       $v1, $v1, 0x6140
    ctx->pc = 0x2997d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24896));
    // 0x2997dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2997dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2997e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2997e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2997e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2997e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2997e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2997e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2997ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2997ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2997f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2997f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2997f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2997f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2997f8: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x2997f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x2997fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2997fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x299800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299804: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x299804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299808: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x299808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x29980c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299810: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x299810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x299814: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x299814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299818: 0xc052608  jal         func_149820
    ctx->pc = 0x299818u;
    SET_GPR_U32(ctx, 31, 0x299820u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x299818u, 0x299820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299820u;
label_299820:
    // 0x299820: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x299820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299824: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x299824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299828: 0x14020005  bne         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x299828u;
    {
        const bool branch_taken_0x299828 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x299828) {
            ctx->pc = 0x299840u;
            goto label_299840;
        }
    }
    ctx->pc = 0x299830u;
    // 0x299830: 0xc0e3992  jal         func_38E648
    ctx->pc = 0x299830u;
    SET_GPR_U32(ctx, 31, 0x299838u);
    ctx->pc = 0x38E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E648u, 0x299830u, 0x299838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299838u;
label_299838:
    // 0x299838: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x299838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29983c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x29983cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_299840:
    // 0x299840: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x299840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299844: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x299844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299848: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x299848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29984c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x29984cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x299850: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x299850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x299854: 0xc052608  jal         func_149820
    ctx->pc = 0x299854u;
    SET_GPR_U32(ctx, 31, 0x29985Cu);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x299854u, 0x29985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29985Cu;
label_29985c:
    // 0x29985c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29985cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299860: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x299860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x299864: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x299864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299868: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x299868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x29986c: 0x2785a318  addiu       $a1, $gp, -0x5CE8
    ctx->pc = 0x29986cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943512));
    // 0x299870: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x299870u;
    SET_GPR_U32(ctx, 31, 0x299878u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x299870u, 0x299878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299878u;
label_299878:
    // 0x299878: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x299878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29987c: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x29987cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x299880: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x299880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299884: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x299888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29988c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29988cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x299890: 0x3e00008  jr          $ra
    ctx->pc = 0x299890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299898u;
    // 0x299898: 0x0  nop
    ctx->pc = 0x299898u;
    // NOP
    // 0x29989c: 0x0  nop
    ctx->pc = 0x29989cu;
    // NOP
    ctx->pc = 0x2998a0u;
}
