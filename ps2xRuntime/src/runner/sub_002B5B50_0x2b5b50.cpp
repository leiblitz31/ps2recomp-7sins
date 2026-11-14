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

// Function: sub_002B5B50
// Address: 0x2b5b50 - 0x2b5c40
void sub_002B5B50_0x2b5b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5B50_0x2b5b50");
#endif

    switch (ctx->pc) {
        case 0x2b5bb4u: goto label_2b5bb4;
        case 0x2b5bc8u: goto label_2b5bc8;
        case 0x2b5be8u: goto label_2b5be8;
        case 0x2b5c1cu: goto label_2b5c1c;
        default: break;
    }

    ctx->pc = 0x2b5b50u;

    // 0x2b5b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5b58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b5b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b5b5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2b5b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b5b60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5b64: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2B5B64u;
    {
        const bool branch_taken_0x2b5b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5b64) {
            ctx->pc = 0x2B5BE8u;
            goto label_2b5be8;
        }
    }
    ctx->pc = 0x2B5B6Cu;
    // 0x2b5b6c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b5b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b5b70: 0x246366b0  addiu       $v1, $v1, 0x66B0
    ctx->pc = 0x2b5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26288));
    // 0x2b5b74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5b78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b5b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b5b7c: 0x8f82bca4  lw          $v0, -0x435C($gp)
    ctx->pc = 0x2b5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950052)));
    // 0x2b5b80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b5b84: 0xaf82bca4  sw          $v0, -0x435C($gp)
    ctx->pc = 0x2b5b84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950052), GPR_U32(ctx, 2));
    // 0x2b5b88: 0x8f82bca4  lw          $v0, -0x435C($gp)
    ctx->pc = 0x2b5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950052)));
    // 0x2b5b8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b5b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2b5b90: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2b5b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2b5b94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5B94u;
    {
        const bool branch_taken_0x2b5b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5b94) {
            ctx->pc = 0x2B5BB8u;
            goto label_2b5bb8;
        }
    }
    ctx->pc = 0x2B5B9Cu;
    // 0x2b5b9c: 0x8f82bca0  lw          $v0, -0x4360($gp)
    ctx->pc = 0x2b5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950048)));
    // 0x2b5ba0: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5BA0u;
    {
        const bool branch_taken_0x2b5ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b5ba0) {
            ctx->pc = 0x2B5BB8u;
            goto label_2b5bb8;
        }
    }
    ctx->pc = 0x2B5BA8u;
    // 0x2b5ba8: 0x8f84bca0  lw          $a0, -0x4360($gp)
    ctx->pc = 0x2b5ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950048)));
    // 0x2b5bac: 0xc1067c6  jal         func_419F18
    ctx->pc = 0x2B5BACu;
    SET_GPR_U32(ctx, 31, 0x2B5BB4u);
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x2B5BACu, 0x2B5BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5BB4u;
label_2b5bb4:
    // 0x2b5bb4: 0xaf80bca0  sw          $zero, -0x4360($gp)
    ctx->pc = 0x2b5bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950048), GPR_U32(ctx, 0));
label_2b5bb8:
    // 0x2b5bb8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b5bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b5bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5bc0: 0xc0ad648  jal         func_2B5920
    ctx->pc = 0x2B5BC0u;
    SET_GPR_U32(ctx, 31, 0x2B5BC8u);
    ctx->pc = 0x2B5920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5920u, 0x2B5BC0u, 0x2B5BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5BC8u;
label_2b5bc8:
    // 0x2b5bc8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2b5bc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5bcc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b5bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b5bd0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b5bd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b5bd4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5BD4u;
    {
        const bool branch_taken_0x2b5bd4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b5bd4) {
            ctx->pc = 0x2B5BE8u;
            goto label_2b5be8;
        }
    }
    ctx->pc = 0x2B5BDCu;
    // 0x2b5bdc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b5bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5be0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2B5BE0u;
    SET_GPR_U32(ctx, 31, 0x2B5BE8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2B5BE0u, 0x2B5BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5BE8u;
label_2b5be8:
    // 0x2b5be8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5bf0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b5bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b5bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5BFCu;
    // 0x2b5bfc: 0x0  nop
    ctx->pc = 0x2b5bfcu;
    // NOP
    // 0x2b5c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b5c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b5c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b5c0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b5c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b5c10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b5c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5c14: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x2B5C14u;
    SET_GPR_U32(ctx, 31, 0x2B5C1Cu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x2B5C14u, 0x2B5C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C1Cu;
label_2b5c1c:
    // 0x2b5c1c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2b5c1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b5c20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b5c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b5c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5c2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b5c2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b5c30: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5C38u;
    // 0x2b5c38: 0x0  nop
    ctx->pc = 0x2b5c38u;
    // NOP
    // 0x2b5c3c: 0x0  nop
    ctx->pc = 0x2b5c3cu;
    // NOP
    ctx->pc = 0x2b5c40u;
}
