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

// Function: sub_002B7C30
// Address: 0x2b7c30 - 0x2b7d60
void sub_002B7C30_0x2b7c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7C30_0x2b7c30");
#endif

    switch (ctx->pc) {
        case 0x2b7c68u: goto label_2b7c68;
        case 0x2b7c7cu: goto label_2b7c7c;
        case 0x2b7c90u: goto label_2b7c90;
        case 0x2b7ca8u: goto label_2b7ca8;
        case 0x2b7cc4u: goto label_2b7cc4;
        case 0x2b7cd0u: goto label_2b7cd0;
        case 0x2b7ce0u: goto label_2b7ce0;
        case 0x2b7d0cu: goto label_2b7d0c;
        case 0x2b7d24u: goto label_2b7d24;
        case 0x2b7d38u: goto label_2b7d38;
        default: break;
    }

    ctx->pc = 0x2b7c30u;

    // 0x2b7c30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b7c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b7c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b7c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b7c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b7c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b7c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b7c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b7c40: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2b7c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2b7c44: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2b7c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2b7c48: 0xa3a60060  sb          $a2, 0x60($sp)
    ctx->pc = 0x2b7c48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b7c4c: 0xa3a70070  sb          $a3, 0x70($sp)
    ctx->pc = 0x2b7c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b7c50: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x2b7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x2b7c54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7c58: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2b7c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2b7c5c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b7c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b7c60: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B7C60u;
    SET_GPR_U32(ctx, 31, 0x2B7C68u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B7C60u, 0x2B7C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C68u;
label_2b7c68:
    // 0x2b7c68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b7c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c6c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7c70: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b7c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b7c74: 0xc048094  jal         func_120250
    ctx->pc = 0x2B7C74u;
    SET_GPR_U32(ctx, 31, 0x2B7C7Cu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2B7C74u, 0x2B7C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C7Cu;
label_2b7c7c:
    // 0x2b7c7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b7c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c80: 0x2785a4b0  addiu       $a1, $gp, -0x5B50
    ctx->pc = 0x2b7c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943920));
    // 0x2b7c84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b7c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7c88: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2B7C88u;
    SET_GPR_U32(ctx, 31, 0x2B7C90u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2B7C88u, 0x2B7C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7C90u;
label_2b7c90:
    // 0x2b7c90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b7c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b7c94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7C94u;
    {
        const bool branch_taken_0x2b7c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7c94) {
            ctx->pc = 0x2B7CB0u;
            goto label_2b7cb0;
        }
    }
    ctx->pc = 0x2B7C9Cu;
    // 0x2b7c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b7c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ca0: 0xc09698c  jal         func_25A630
    ctx->pc = 0x2B7CA0u;
    SET_GPR_U32(ctx, 31, 0x2B7CA8u);
    ctx->pc = 0x25A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A630u, 0x2B7CA0u, 0x2B7CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7CA8u;
label_2b7ca8:
    // 0x2b7ca8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B7CA8u;
    {
        const bool branch_taken_0x2b7ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7ca8) {
            ctx->pc = 0x2B7CC4u;
            goto label_2b7cc4;
        }
    }
    ctx->pc = 0x2B7CB0u;
label_2b7cb0:
    // 0x2b7cb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7cb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b7cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b7cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b7cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7cbc: 0xc096980  jal         func_25A600
    ctx->pc = 0x2B7CBCu;
    SET_GPR_U32(ctx, 31, 0x2B7CC4u);
    ctx->pc = 0x25A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A600u, 0x2B7CBCu, 0x2B7CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7CC4u;
label_2b7cc4:
    // 0x2b7cc4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x2b7cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2b7cc8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2B7CC8u;
    SET_GPR_U32(ctx, 31, 0x2B7CD0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2B7CC8u, 0x2B7CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7CD0u;
label_2b7cd0:
    // 0x2b7cd0: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x2b7cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2b7cd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b7cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7cd8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2B7CD8u;
    SET_GPR_U32(ctx, 31, 0x2B7CE0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2B7CD8u, 0x2B7CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7CE0u;
label_2b7ce0:
    // 0x2b7ce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ce4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B7CE4u;
    {
        const bool branch_taken_0x2b7ce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7ce4) {
            ctx->pc = 0x2B7D10u;
            goto label_2b7d10;
        }
    }
    ctx->pc = 0x2B7CECu;
    // 0x2b7cec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b7cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7cf4: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x2b7cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2b7cf8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2b7cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7cfc: 0x93a70060  lbu         $a3, 0x60($sp)
    ctx->pc = 0x2b7cfcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b7d00: 0x93a80070  lbu         $t0, 0x70($sp)
    ctx->pc = 0x2b7d00u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b7d04: 0xc0ae274  jal         func_2B89D0
    ctx->pc = 0x2B7D04u;
    SET_GPR_U32(ctx, 31, 0x2B7D0Cu);
    ctx->pc = 0x2B89D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B89D0u, 0x2B7D04u, 0x2B7D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D0Cu;
label_2b7d0c:
    // 0x2b7d0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d10:
    // 0x2b7d10: 0xafb0003c  sw          $s0, 0x3C($sp)
    ctx->pc = 0x2b7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 16));
    // 0x2b7d14: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x2b7d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b7d18: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2b7d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b7d1c: 0xc0ae038  jal         func_2B80E0
    ctx->pc = 0x2B7D1Cu;
    SET_GPR_U32(ctx, 31, 0x2B7D24u);
    ctx->pc = 0x2B80E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B80E0u, 0x2B7D1Cu, 0x2B7D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D24u;
label_2b7d24:
    // 0x2b7d24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7d28: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b7d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b7d2c: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x2b7d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2b7d30: 0xc0adf58  jal         func_2B7D60
    ctx->pc = 0x2B7D30u;
    SET_GPR_U32(ctx, 31, 0x2B7D38u);
    ctx->pc = 0x2B7D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7D60u, 0x2B7D30u, 0x2B7D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D38u;
label_2b7d38:
    // 0x2b7d38: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2b7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2b7d3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b7d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7d40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b7d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b7d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7d48: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2b7d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b7d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7D54u;
    // 0x2b7d54: 0x0  nop
    ctx->pc = 0x2b7d54u;
    // NOP
    // 0x2b7d58: 0x0  nop
    ctx->pc = 0x2b7d58u;
    // NOP
    // 0x2b7d5c: 0x0  nop
    ctx->pc = 0x2b7d5cu;
    // NOP
    ctx->pc = 0x2b7d60u;
}
