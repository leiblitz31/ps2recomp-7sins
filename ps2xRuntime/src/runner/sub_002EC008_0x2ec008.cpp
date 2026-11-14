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

// Function: sub_002EC008
// Address: 0x2ec008 - 0x2ec060
void sub_002EC008_0x2ec008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC008_0x2ec008");
#endif

    switch (ctx->pc) {
        case 0x2ec050u: goto label_2ec050;
        default: break;
    }

    ctx->pc = 0x2ec008u;

    // 0x2ec008: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ec008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ec00c: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x2ec00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x2ec010: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2ec010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ec014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ec014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ec018: 0xffa70038  sd          $a3, 0x38($sp)
    ctx->pc = 0x2ec018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 7));
    // 0x2ec01c: 0xffa80040  sd          $t0, 0x40($sp)
    ctx->pc = 0x2ec01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 8));
    // 0x2ec020: 0xffa90048  sd          $t1, 0x48($sp)
    ctx->pc = 0x2ec020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 9));
    // 0x2ec024: 0xffaa0050  sd          $t2, 0x50($sp)
    ctx->pc = 0x2ec024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 10));
    // 0x2ec028: 0xffab0058  sd          $t3, 0x58($sp)
    ctx->pc = 0x2ec028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 11));
    // 0x2ec02c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2ec02cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ec030: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x2ec030u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ec034: 0xe7ae0018  swc1        $f14, 0x18($sp)
    ctx->pc = 0x2ec034u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ec038: 0xe7af001c  swc1        $f15, 0x1C($sp)
    ctx->pc = 0x2ec038u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2ec03c: 0xe7b00020  swc1        $f16, 0x20($sp)
    ctx->pc = 0x2ec03cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ec040: 0xe7b10024  swc1        $f17, 0x24($sp)
    ctx->pc = 0x2ec040u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ec044: 0xe7b20028  swc1        $f18, 0x28($sp)
    ctx->pc = 0x2ec044u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ec048: 0xc0bce84  jal         func_2F3A10
    ctx->pc = 0x2EC048u;
    SET_GPR_U32(ctx, 31, 0x2EC050u);
    ctx->pc = 0x2EC04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC048u;
    // 0x2ec04c: 0xe7b3002c  swc1        $f19, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3A10u, 0x2EC048u, 0x2EC050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC050u;
label_2ec050:
    // 0x2ec050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec054: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC054u;
        // 0x2ec058: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC05Cu;
    // 0x2ec05c: 0x0  nop
    ctx->pc = 0x2ec05cu;
    // NOP
    ctx->pc = 0x2ec060u;
}
