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

// Function: sub_0031EC70
// Address: 0x31ec70 - 0x31ecd0
void sub_0031EC70_0x31ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EC70_0x31ec70");
#endif

    switch (ctx->pc) {
        case 0x31ec94u: goto label_31ec94;
        case 0x31eca8u: goto label_31eca8;
        case 0x31ecb0u: goto label_31ecb0;
        default: break;
    }

    ctx->pc = 0x31ec70u;

    // 0x31ec70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31ec74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31ec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31ec78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31ec7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31ec7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ec80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31ec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31ec84: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x31ec88: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x31ec88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x31ec8c: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x31EC8Cu;
    SET_GPR_U32(ctx, 31, 0x31EC94u);
    ctx->pc = 0x31EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EC8Cu;
    // 0x31ec90: 0x3484002e  ori         $a0, $a0, 0x2E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x31EC8Cu, 0x31EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EC94u;
label_31ec94:
    // 0x31ec94: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31ec94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x31ec98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x31ec98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ec9c: 0x24a5ecd0  addiu       $a1, $a1, -0x1330
    ctx->pc = 0x31ec9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962384));
    // 0x31eca0: 0xc0e3396  jal         func_38CE58
    ctx->pc = 0x31ECA0u;
    SET_GPR_U32(ctx, 31, 0x31ECA8u);
    ctx->pc = 0x31ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ECA0u;
    // 0x31eca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x31ECA0u, 0x31ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ECA8u;
label_31eca8:
    // 0x31eca8: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x31ECA8u;
    SET_GPR_U32(ctx, 31, 0x31ECB0u);
    ctx->pc = 0x31ECACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ECA8u;
    // 0x31ecac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x31ECA8u, 0x31ECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ECB0u;
label_31ecb0:
    // 0x31ecb0: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x31ecb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x31ecb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31ecb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ecb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31ecb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ecbc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31ecbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ecc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ecc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ecc4: 0x3e00008  jr          $ra
    ctx->pc = 0x31ECC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECC4u;
        // 0x31ecc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ECC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31ECCCu;
    // 0x31eccc: 0x0  nop
    ctx->pc = 0x31ecccu;
    // NOP
    ctx->pc = 0x31ecd0u;
}
