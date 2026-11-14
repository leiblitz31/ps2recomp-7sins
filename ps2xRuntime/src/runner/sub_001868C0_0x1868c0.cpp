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

// Function: sub_001868C0
// Address: 0x1868c0 - 0x186960
void sub_001868C0_0x1868c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001868C0_0x1868c0");
#endif

    switch (ctx->pc) {
        case 0x1868fcu: goto label_1868fc;
        case 0x186934u: goto label_186934;
        default: break;
    }

    ctx->pc = 0x1868c0u;

    // 0x1868c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1868c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1868c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1868c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1868c8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1868c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1868cc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1868ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1868d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1868d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1868d4: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x1868d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1868d8: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1868d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1868dc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1868DCu;
    {
        const bool branch_taken_0x1868dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1868dc) {
            ctx->pc = 0x186908u;
            goto label_186908;
        }
    }
    ctx->pc = 0x1868E4u;
    // 0x1868e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1868e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1868e8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1868e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1868ec: 0x24450090  addiu       $a1, $v0, 0x90
    ctx->pc = 0x1868ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1868f0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1868f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1868f4: 0xc061a58  jal         func_186960
    ctx->pc = 0x1868F4u;
    SET_GPR_U32(ctx, 31, 0x1868FCu);
    ctx->pc = 0x186960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186960u, 0x1868F4u, 0x1868FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1868FCu;
label_1868fc:
    // 0x1868fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1868fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186900: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x186900u;
    {
        const bool branch_taken_0x186900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186900) {
            ctx->pc = 0x186944u;
            goto label_186944;
        }
    }
    ctx->pc = 0x186908u;
label_186908:
    // 0x186908: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x186908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18690c: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x18690cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x186910: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x186910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x186914: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x186914u;
    {
        const bool branch_taken_0x186914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186914) {
            ctx->pc = 0x186940u;
            goto label_186940;
        }
    }
    ctx->pc = 0x18691Cu;
    // 0x18691c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186920: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x186920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x186924: 0x24450084  addiu       $a1, $v0, 0x84
    ctx->pc = 0x186924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x186928: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x186928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18692c: 0xc061a58  jal         func_186960
    ctx->pc = 0x18692Cu;
    SET_GPR_U32(ctx, 31, 0x186934u);
    ctx->pc = 0x186960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186960u, 0x18692Cu, 0x186934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186934u;
label_186934:
    // 0x186934: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x186934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186938u;
    {
        const bool branch_taken_0x186938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186938) {
            ctx->pc = 0x186944u;
            goto label_186944;
        }
    }
    ctx->pc = 0x186940u;
label_186940:
    // 0x186940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x186940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186944:
    // 0x186944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186948: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x186948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18694c: 0x3e00008  jr          $ra
    ctx->pc = 0x18694Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18694Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186954u;
    // 0x186954: 0x0  nop
    ctx->pc = 0x186954u;
    // NOP
    // 0x186958: 0x0  nop
    ctx->pc = 0x186958u;
    // NOP
    // 0x18695c: 0x0  nop
    ctx->pc = 0x18695cu;
    // NOP
    ctx->pc = 0x186960u;
}
