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

// Function: sub_00267E50
// Address: 0x267e50 - 0x267f70
void sub_00267E50_0x267e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267E50_0x267e50");
#endif

    switch (ctx->pc) {
        case 0x267eacu: goto label_267eac;
        case 0x267ebcu: goto label_267ebc;
        case 0x267eccu: goto label_267ecc;
        case 0x267ed8u: goto label_267ed8;
        case 0x267efcu: goto label_267efc;
        case 0x267f14u: goto label_267f14;
        default: break;
    }

    ctx->pc = 0x267e50u;

    // 0x267e50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x267e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x267e54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x267e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x267e58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x267e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x267e5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x267e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x267e60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x267e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267e64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x267e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x267e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267e6c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x267e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x267e70: 0xa3a50070  sb          $a1, 0x70($sp)
    ctx->pc = 0x267e70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 5));
    // 0x267e74: 0xa3a60080  sb          $a2, 0x80($sp)
    ctx->pc = 0x267e74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 6));
    // 0x267e78: 0x93a20080  lbu         $v0, 0x80($sp)
    ctx->pc = 0x267e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x267e7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x267E7Cu;
    {
        const bool branch_taken_0x267e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267e7c) {
            ctx->pc = 0x267E94u;
            goto label_267e94;
        }
    }
    ctx->pc = 0x267E84u;
    // 0x267e84: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x267e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267e88: 0x2452003c  addiu       $s2, $v0, 0x3C
    ctx->pc = 0x267e88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x267e8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267E8Cu;
    {
        const bool branch_taken_0x267e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267e8c) {
            ctx->pc = 0x267E9Cu;
            goto label_267e9c;
        }
    }
    ctx->pc = 0x267E94u;
label_267e94:
    // 0x267e94: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x267e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267e98: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x267e98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_267e9c:
    // 0x267e9c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x267e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ea4: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x267EA4u;
    SET_GPR_U32(ctx, 31, 0x267EACu);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x267EA4u, 0x267EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267EACu;
label_267eac:
    // 0x267eac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x267eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267eb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x267eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267eb4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x267EB4u;
    {
        const bool branch_taken_0x267eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267eb4) {
            ctx->pc = 0x267F30u;
            goto label_267f30;
        }
    }
    ctx->pc = 0x267EBCu;
label_267ebc:
    // 0x267ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x267ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ec4: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x267EC4u;
    SET_GPR_U32(ctx, 31, 0x267ECCu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x267EC4u, 0x267ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267ECCu;
label_267ecc:
    // 0x267ecc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x267eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267ed0: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x267ED0u;
    SET_GPR_U32(ctx, 31, 0x267ED8u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x267ED0u, 0x267ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267ED8u;
label_267ed8:
    // 0x267ed8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x267ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x267edc: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x267EDCu;
    {
        const bool branch_taken_0x267edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x267edc) {
            ctx->pc = 0x267F2Cu;
            goto label_267f2c;
        }
    }
    ctx->pc = 0x267EE4u;
    // 0x267ee4: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x267ee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267ee8: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x267ee8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x267eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x267ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ef4: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x267EF4u;
    SET_GPR_U32(ctx, 31, 0x267EFCu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x267EF4u, 0x267EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267EFCu;
label_267efc:
    // 0x267efc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x267efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267f00: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x267f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x267f04: 0x24a5cd78  addiu       $a1, $a1, -0x3288
    ctx->pc = 0x267f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954360));
    // 0x267f08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x267f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267f0c: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x267F0Cu;
    SET_GPR_U32(ctx, 31, 0x267F14u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x267F0Cu, 0x267F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F14u;
label_267f14:
    // 0x267f14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x267f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x267f18: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267F18u;
    {
        const bool branch_taken_0x267f18 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x267f18) {
            ctx->pc = 0x267F2Cu;
            goto label_267f2c;
        }
    }
    ctx->pc = 0x267F20u;
    // 0x267f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267f24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x267F24u;
    {
        const bool branch_taken_0x267f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267f24) {
            ctx->pc = 0x267F40u;
            goto label_267f40;
        }
    }
    ctx->pc = 0x267F2Cu;
label_267f2c:
    // 0x267f2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x267f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_267f30:
    // 0x267f30: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x267f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x267f34: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x267F34u;
    {
        const bool branch_taken_0x267f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267f34) {
            ctx->pc = 0x267EBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267ebc;
        }
    }
    ctx->pc = 0x267F3Cu;
    // 0x267f3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x267f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267f40:
    // 0x267f40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x267f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267f44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x267f44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267f48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x267f48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267f4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x267f4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267f54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267f58: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x267f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x267f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x267F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267F64u;
    // 0x267f64: 0x0  nop
    ctx->pc = 0x267f64u;
    // NOP
    // 0x267f68: 0x0  nop
    ctx->pc = 0x267f68u;
    // NOP
    // 0x267f6c: 0x0  nop
    ctx->pc = 0x267f6cu;
    // NOP
    ctx->pc = 0x267f70u;
}
