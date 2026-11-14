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

// Function: sub_001598A0
// Address: 0x1598a0 - 0x159950
void sub_001598A0_0x1598a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001598A0_0x1598a0");
#endif

    switch (ctx->pc) {
        case 0x1598f8u: goto label_1598f8;
        default: break;
    }

    ctx->pc = 0x1598a0u;

    // 0x1598a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1598a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1598a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1598a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1598a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1598a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1598ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1598acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1598b0: 0xa7a50030  sh          $a1, 0x30($sp)
    ctx->pc = 0x1598b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x1598b4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1598b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1598b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1598b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1598bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1598bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1598c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1598C0u;
    {
        const bool branch_taken_0x1598c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1598c0) {
            ctx->pc = 0x1598D4u;
            goto label_1598d4;
        }
    }
    ctx->pc = 0x1598C8u;
    // 0x1598c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1598c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1598cc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1598CCu;
    {
        const bool branch_taken_0x1598cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1598cc) {
            ctx->pc = 0x159934u;
            goto label_159934;
        }
    }
    ctx->pc = 0x1598D4u;
label_1598d4:
    // 0x1598d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1598d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1598d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1598d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1598dc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1598dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1598e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1598e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1598e4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1598e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1598e8: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x1598e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1598ec: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1598ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1598f0: 0xc11926c  jal         func_4649B0
    ctx->pc = 0x1598F0u;
    SET_GPR_U32(ctx, 31, 0x1598F8u);
    ctx->pc = 0x4649B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4649B0u, 0x1598F0u, 0x1598F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1598F8u;
label_1598f8:
    // 0x1598f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1598f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1598fc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1598FCu;
    {
        const bool branch_taken_0x1598fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1598fc) {
            ctx->pc = 0x159910u;
            goto label_159910;
        }
    }
    ctx->pc = 0x159904u;
    // 0x159904: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x159904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x159908: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x159908u;
    {
        const bool branch_taken_0x159908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159908) {
            ctx->pc = 0x159934u;
            goto label_159934;
        }
    }
    ctx->pc = 0x159910u;
label_159910:
    // 0x159910: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x159910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159914: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x159914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159918: 0x2021823  subu        $v1, $s0, $v0
    ctx->pc = 0x159918u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15991c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159920: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x159920u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x159924: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159924u;
    {
        const bool branch_taken_0x159924 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x159924) {
            ctx->pc = 0x159934u;
            goto label_159934;
        }
    }
    ctx->pc = 0x15992Cu;
    // 0x15992c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x159930: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x159930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_159934:
    // 0x159934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15993c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15993cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159940: 0x3e00008  jr          $ra
    ctx->pc = 0x159940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159948u;
    // 0x159948: 0x0  nop
    ctx->pc = 0x159948u;
    // NOP
    // 0x15994c: 0x0  nop
    ctx->pc = 0x15994cu;
    // NOP
    ctx->pc = 0x159950u;
}
