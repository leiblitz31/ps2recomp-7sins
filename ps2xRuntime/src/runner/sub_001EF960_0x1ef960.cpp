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

// Function: sub_001EF960
// Address: 0x1ef960 - 0x1efa30
void sub_001EF960_0x1ef960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF960_0x1ef960");
#endif

    switch (ctx->pc) {
        case 0x1ef988u: goto label_1ef988;
        case 0x1ef9a0u: goto label_1ef9a0;
        case 0x1ef9c8u: goto label_1ef9c8;
        default: break;
    }

    ctx->pc = 0x1ef960u;

    // 0x1ef960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ef960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ef964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ef964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ef968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef96c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ef96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ef970: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1ef970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1ef974: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ef974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef978: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ef978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef97c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1ef97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef980: 0xc07be2c  jal         func_1EF8B0
    ctx->pc = 0x1EF980u;
    SET_GPR_U32(ctx, 31, 0x1EF988u);
    ctx->pc = 0x1EF8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B0u, 0x1EF980u, 0x1EF988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF988u;
label_1ef988:
    // 0x1ef988: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EF988u;
    {
        const bool branch_taken_0x1ef988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef988) {
            ctx->pc = 0x1EFA0Cu;
            goto label_1efa0c;
        }
    }
    ctx->pc = 0x1EF990u;
    // 0x1ef990: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ef990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef994: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1ef994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef998: 0xc07bd98  jal         func_1EF660
    ctx->pc = 0x1EF998u;
    SET_GPR_U32(ctx, 31, 0x1EF9A0u);
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1EF998u, 0x1EF9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9A0u;
label_1ef9a0:
    // 0x1ef9a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF9A0u;
    {
        const bool branch_taken_0x1ef9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef9a0) {
            ctx->pc = 0x1EF9B8u;
            goto label_1ef9b8;
        }
    }
    ctx->pc = 0x1EF9A8u;
    // 0x1ef9a8: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ef9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ef9ac: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x1ef9acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ef9b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1EF9B0u;
    {
        const bool branch_taken_0x1ef9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef9b0) {
            ctx->pc = 0x1EF9E8u;
            goto label_1ef9e8;
        }
    }
    ctx->pc = 0x1EF9B8u;
label_1ef9b8:
    // 0x1ef9b8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ef9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef9bc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1ef9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef9c0: 0xc07bd74  jal         func_1EF5D0
    ctx->pc = 0x1EF9C0u;
    SET_GPR_U32(ctx, 31, 0x1EF9C8u);
    ctx->pc = 0x1EF5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF5D0u, 0x1EF9C0u, 0x1EF9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9C8u;
label_1ef9c8:
    // 0x1ef9c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF9C8u;
    {
        const bool branch_taken_0x1ef9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef9c8) {
            ctx->pc = 0x1EF9E0u;
            goto label_1ef9e0;
        }
    }
    ctx->pc = 0x1EF9D0u;
    // 0x1ef9d0: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ef9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ef9d4: 0x8c70000c  lw          $s0, 0xC($v1)
    ctx->pc = 0x1ef9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1ef9d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF9D8u;
    {
        const bool branch_taken_0x1ef9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef9d8) {
            ctx->pc = 0x1EF9E8u;
            goto label_1ef9e8;
        }
    }
    ctx->pc = 0x1EF9E0u;
label_1ef9e0:
    // 0x1ef9e0: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ef9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ef9e4: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1ef9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ef9e8:
    // 0x1ef9e8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1ef9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef9ec: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1ef9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1ef9f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ef9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ef9f4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1ef9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1ef9f8: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x1ef9f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ef9fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF9FCu;
    {
        const bool branch_taken_0x1ef9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef9fc) {
            ctx->pc = 0x1EFA0Cu;
            goto label_1efa0c;
        }
    }
    ctx->pc = 0x1EFA04u;
    // 0x1efa04: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1efa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1efa08: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1efa08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_1efa0c:
    // 0x1efa0c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1efa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efa10: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1efa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efa14: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1efa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1efa18: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1efa18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1efa1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1efa1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efa20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1efa20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efa24: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1efa24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1efa28: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFA30u;
}
