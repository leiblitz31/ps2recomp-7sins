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

// Function: sub_00145AE0
// Address: 0x145ae0 - 0x145be0
void sub_00145AE0_0x145ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145AE0_0x145ae0");
#endif

    switch (ctx->pc) {
        case 0x145b38u: goto label_145b38;
        case 0x145b4cu: goto label_145b4c;
        case 0x145b5cu: goto label_145b5c;
        case 0x145b68u: goto label_145b68;
        case 0x145b78u: goto label_145b78;
        case 0x145b94u: goto label_145b94;
        case 0x145ba8u: goto label_145ba8;
        case 0x145bbcu: goto label_145bbc;
        default: break;
    }

    ctx->pc = 0x145ae0u;

    // 0x145ae0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x145ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x145ae4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x145ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x145ae8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x145ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x145aec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x145aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x145af0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x145af4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145afc: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x145afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x145b00: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x145b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x145b04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145b08: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145B08u;
    {
        const bool branch_taken_0x145b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x145b08) {
            ctx->pc = 0x145B18u;
            goto label_145b18;
        }
    }
    ctx->pc = 0x145B10u;
    // 0x145b10: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x145B10u;
    {
        const bool branch_taken_0x145b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145b10) {
            ctx->pc = 0x145BBCu;
            goto label_145bbc;
        }
    }
    ctx->pc = 0x145B18u;
label_145b18:
    // 0x145b18: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x145b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x145b1c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x145b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145b20: 0x10100026  beq         $zero, $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x145B20u;
    {
        const bool branch_taken_0x145b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x145b20) {
            ctx->pc = 0x145BBCu;
            goto label_145bbc;
        }
    }
    ctx->pc = 0x145B28u;
    // 0x145b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b2c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x145b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x145b30: 0xc085538  jal         func_2154E0
    ctx->pc = 0x145B30u;
    SET_GPR_U32(ctx, 31, 0x145B38u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x145B30u, 0x145B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B38u;
label_145b38:
    // 0x145b38: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x145b38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b40: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x145b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x145b44: 0xc085538  jal         func_2154E0
    ctx->pc = 0x145B44u;
    SET_GPR_U32(ctx, 31, 0x145B4Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x145B44u, 0x145B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B4Cu;
label_145b4c:
    // 0x145b4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x145b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x145b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b54: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x145B54u;
    SET_GPR_U32(ctx, 31, 0x145B5Cu);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x145B54u, 0x145B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B5Cu;
label_145b5c:
    // 0x145b5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b60: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x145B60u;
    SET_GPR_U32(ctx, 31, 0x145B68u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x145B60u, 0x145B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B68u;
label_145b68:
    // 0x145b68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x145b68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b6c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x145b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x145b70: 0xc0516f8  jal         func_145BE0
    ctx->pc = 0x145B70u;
    SET_GPR_U32(ctx, 31, 0x145B78u);
    ctx->pc = 0x145BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BE0u, 0x145B70u, 0x145B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B78u;
label_145b78:
    // 0x145b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145b7c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x145b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x145b80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145b84: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x145b84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x145b88: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x145b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x145b8c: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x145B8Cu;
    SET_GPR_U32(ctx, 31, 0x145B94u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x145B8Cu, 0x145B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B94u;
label_145b94:
    // 0x145b94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b98: 0x27858ca8  addiu       $a1, $gp, -0x7358
    ctx->pc = 0x145b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937768));
    // 0x145b9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x145b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ba0: 0xc047314  jal         func_11CC50
    ctx->pc = 0x145BA0u;
    SET_GPR_U32(ctx, 31, 0x145BA8u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x145BA0u, 0x145BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145BA8u;
label_145ba8:
    // 0x145ba8: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x145ba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x145bac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x145bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x145bb0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x145bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x145bb4: 0xc08d69c  jal         func_235A70
    ctx->pc = 0x145BB4u;
    SET_GPR_U32(ctx, 31, 0x145BBCu);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x145BB4u, 0x145BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145BBCu;
label_145bbc:
    // 0x145bbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x145bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x145bc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x145bc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145bc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x145bc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145bc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145bc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145bcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145bd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145bd4: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x145bd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x145bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x145BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145BE0u;
}
