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

// Function: sub_0011ACB0
// Address: 0x11acb0 - 0x11ad70
void sub_0011ACB0_0x11acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011ACB0_0x11acb0");
#endif

    switch (ctx->pc) {
        case 0x11acc4u: goto label_11acc4;
        case 0x11acd0u: goto label_11acd0;
        case 0x11acf0u: goto label_11acf0;
        case 0x11ad08u: goto label_11ad08;
        case 0x11ad1cu: goto label_11ad1c;
        case 0x11ad50u: goto label_11ad50;
        default: break;
    }

    ctx->pc = 0x11acb0u;

    // 0x11acb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11acb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11acb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11acb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11acb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11acbc: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x11ACBCu;
    SET_GPR_U32(ctx, 31, 0x11ACC4u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x11ACBCu, 0x11ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ACC4u;
label_11acc4:
    // 0x11acc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11acc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acc8: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x11ACC8u;
    SET_GPR_U32(ctx, 31, 0x11ACD0u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x11ACC8u, 0x11ACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ACD0u;
label_11acd0:
    // 0x11acd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11acd4: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x11ACD4u;
    {
        const bool branch_taken_0x11acd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11acd4) {
            ctx->pc = 0x11AD50u;
            goto label_11ad50;
        }
    }
    ctx->pc = 0x11ACDCu;
    // 0x11acdc: 0x8f82b9d0  lw          $v0, -0x4630($gp)
    ctx->pc = 0x11acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949328)));
    // 0x11ace0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x11ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11ace4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11ace4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11ace8: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x11ACE8u;
    SET_GPR_U32(ctx, 31, 0x11ACF0u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11ACE8u, 0x11ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ACF0u;
label_11acf0:
    // 0x11acf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11acf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acf4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11ACF4u;
    {
        const bool branch_taken_0x11acf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11acf4) {
            ctx->pc = 0x11AD50u;
            goto label_11ad50;
        }
    }
    ctx->pc = 0x11ACFCu;
    // 0x11acfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11acfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad00: 0xc0413bc  jal         func_104EF0
    ctx->pc = 0x11AD00u;
    SET_GPR_U32(ctx, 31, 0x11AD08u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x11AD00u, 0x11AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD08u;
label_11ad08:
    // 0x11ad08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11AD08u;
    {
        const bool branch_taken_0x11ad08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ad08) {
            ctx->pc = 0x11AD50u;
            goto label_11ad50;
        }
    }
    ctx->pc = 0x11AD10u;
    // 0x11ad10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ad10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad14: 0xc057ce0  jal         func_15F380
    ctx->pc = 0x11AD14u;
    SET_GPR_U32(ctx, 31, 0x11AD1Cu);
    ctx->pc = 0x15F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F380u, 0x11AD14u, 0x11AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD1Cu;
label_11ad1c:
    // 0x11ad1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11ad1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11ad20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ad24: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11AD24u;
    {
        const bool branch_taken_0x11ad24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ad24) {
            ctx->pc = 0x11AD50u;
            goto label_11ad50;
        }
    }
    ctx->pc = 0x11AD2Cu;
    // 0x11ad2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x11ad30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11ad30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11ad34: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x11ad38: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x11ad3c: 0x24a51c68  addiu       $a1, $a1, 0x1C68
    ctx->pc = 0x11ad3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7272));
    // 0x11ad40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ad40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad44: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x11ad44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11ad48: 0xc08f558  jal         func_23D560
    ctx->pc = 0x11AD48u;
    SET_GPR_U32(ctx, 31, 0x11AD50u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x11AD48u, 0x11AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD50u;
label_11ad50:
    // 0x11ad50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ad54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ad54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ad58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11ad58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ad5c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x11ad5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11ad60: 0x3e00008  jr          $ra
    ctx->pc = 0x11AD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AD68u;
    // 0x11ad68: 0x0  nop
    ctx->pc = 0x11ad68u;
    // NOP
    // 0x11ad6c: 0x0  nop
    ctx->pc = 0x11ad6cu;
    // NOP
    ctx->pc = 0x11ad70u;
}
