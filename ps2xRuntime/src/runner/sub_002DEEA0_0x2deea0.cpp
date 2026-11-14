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

// Function: sub_002DEEA0
// Address: 0x2deea0 - 0x2defb0
void sub_002DEEA0_0x2deea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEEA0_0x2deea0");
#endif

    switch (ctx->pc) {
        case 0x2deec0u: goto label_2deec0;
        case 0x2deef0u: goto label_2deef0;
        case 0x2def10u: goto label_2def10;
        default: break;
    }

    ctx->pc = 0x2deea0u;

    // 0x2deea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2deea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2deea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2deea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2deea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2deea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2deeac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2deeacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2deeb0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2deeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deeb4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2deeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2deeb8: 0xc091174  jal         func_2445D0
    ctx->pc = 0x2DEEB8u;
    SET_GPR_U32(ctx, 31, 0x2DEEC0u);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x2DEEB8u, 0x2DEEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEC0u;
label_2deec0:
    // 0x2deec0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2deec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2deec4: 0x24636a00  addiu       $v1, $v1, 0x6A00
    ctx->pc = 0x2deec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27136));
    // 0x2deec8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2deec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deecc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2deeccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2deed0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2deed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deed4: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2deed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2deed8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2deed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deedc: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2deedcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2deee0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2deee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deee4: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2deee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2deee8: 0xc0b7d78  jal         func_2DF5E0
    ctx->pc = 0x2DEEE8u;
    SET_GPR_U32(ctx, 31, 0x2DEEF0u);
    ctx->pc = 0x2DF5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF5E0u, 0x2DEEE8u, 0x2DEEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEF0u;
label_2deef0:
    // 0x2deef0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2deef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deef4: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x2deef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x2deef8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2deef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deefc: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x2deefcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x2def00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2def00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2def04: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2def04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2def08: 0xc0b7d20  jal         func_2DF480
    ctx->pc = 0x2DEF08u;
    SET_GPR_U32(ctx, 31, 0x2DEF10u);
    ctx->pc = 0x2DF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF480u, 0x2DEF08u, 0x2DEF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEF10u;
label_2def10:
    // 0x2def10: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x2def10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2def14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2def14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2def18: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x2def18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x2def1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2def1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2def20: 0xac430098  sw          $v1, 0x98($v0)
    ctx->pc = 0x2def20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 3));
    // 0x2def24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2def24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2def28: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x2def28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x2def2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2def2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2def30: 0xac43009c  sw          $v1, 0x9C($v0)
    ctx->pc = 0x2def30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 3));
    // 0x2def34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2def34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2def38: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x2def38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x2def3c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2def3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2def40: 0xac4300a0  sw          $v1, 0xA0($v0)
    ctx->pc = 0x2def40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 3));
    // 0x2def44: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2def44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2def48: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x2def48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x2def4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2def4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2def50: 0xac4300a4  sw          $v1, 0xA4($v0)
    ctx->pc = 0x2def50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 3));
    // 0x2def54: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2def54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2def58: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x2def58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x2def5c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2def5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2def60: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x2def60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
    // 0x2def64: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2def64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2def68: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x2def68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x2def6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2def6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2def70: 0xac4300ac  sw          $v1, 0xAC($v0)
    ctx->pc = 0x2def70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 3));
    // 0x2def74: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2def74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2def78: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x2def78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x2def7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2def7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2def80: 0xac4300b0  sw          $v1, 0xB0($v0)
    ctx->pc = 0x2def80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
    // 0x2def84: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2def84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2def88: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x2def88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x2def8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2def8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2def90: 0xac4300b4  sw          $v1, 0xB4($v0)
    ctx->pc = 0x2def90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 3));
    // 0x2def94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2def94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2def98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2def98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2def9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2def9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2defa0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2defa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2defa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEFACu;
    // 0x2defac: 0x0  nop
    ctx->pc = 0x2defacu;
    // NOP
    ctx->pc = 0x2defb0u;
}
