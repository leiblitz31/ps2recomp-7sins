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

// Function: sub_00163AA0
// Address: 0x163aa0 - 0x163b40
void sub_00163AA0_0x163aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163AA0_0x163aa0");
#endif

    switch (ctx->pc) {
        case 0x163ac4u: goto label_163ac4;
        case 0x163ae0u: goto label_163ae0;
        case 0x163af4u: goto label_163af4;
        case 0x163b10u: goto label_163b10;
        default: break;
    }

    ctx->pc = 0x163aa0u;

    // 0x163aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x163aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x163aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x163aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163aac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x163aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x163ab0: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x163ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x163ab4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x163ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163ab8: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x163ab8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163abc: 0xc055a78  jal         func_1569E0
    ctx->pc = 0x163ABCu;
    SET_GPR_U32(ctx, 31, 0x163AC4u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x163ABCu, 0x163AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AC4u;
label_163ac4:
    // 0x163ac4: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x163ac4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163ac8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x163ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x163acc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x163ACCu;
    {
        const bool branch_taken_0x163acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x163acc) {
            ctx->pc = 0x163B20u;
            goto label_163b20;
        }
    }
    ctx->pc = 0x163AD4u;
    // 0x163ad4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x163ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ad8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x163AD8u;
    {
        const bool branch_taken_0x163ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163ad8) {
            ctx->pc = 0x163B14u;
            goto label_163b14;
        }
    }
    ctx->pc = 0x163AE0u;
label_163ae0:
    // 0x163ae0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x163ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163ae4: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x163ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x163ae8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x163ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163aec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x163AECu;
    SET_GPR_U32(ctx, 31, 0x163AF4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x163AECu, 0x163AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AF4u;
label_163af4:
    // 0x163af4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x163af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163af8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x163af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163afc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x163afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x163b00: 0x27868e38  addiu       $a2, $gp, -0x71C8
    ctx->pc = 0x163b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938168));
    // 0x163b04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x163b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163b08: 0xc08c32c  jal         func_230CB0
    ctx->pc = 0x163B08u;
    SET_GPR_U32(ctx, 31, 0x163B10u);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x163B08u, 0x163B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B10u;
label_163b10:
    // 0x163b10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x163b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_163b14:
    // 0x163b14: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x163b14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x163b18: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x163B18u;
    {
        const bool branch_taken_0x163b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x163b18) {
            ctx->pc = 0x163AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163ae0;
        }
    }
    ctx->pc = 0x163B20u;
label_163b20:
    // 0x163b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x163b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163b28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x163b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x163b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x163B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163B34u;
    // 0x163b34: 0x0  nop
    ctx->pc = 0x163b34u;
    // NOP
    // 0x163b38: 0x0  nop
    ctx->pc = 0x163b38u;
    // NOP
    // 0x163b3c: 0x0  nop
    ctx->pc = 0x163b3cu;
    // NOP
    ctx->pc = 0x163b40u;
}
