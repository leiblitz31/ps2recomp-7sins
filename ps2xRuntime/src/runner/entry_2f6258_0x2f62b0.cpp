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

// Function: entry_2f6258
// Address: 0x2f6258 - 0x2f62b0
void entry_2f6258_0x2f62b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2f6258_0x2f62b0");
#endif

    switch (ctx->pc) {
        case 0x2f6298u: goto label_2f6298;
        default: break;
    }

    ctx->pc = 0x2f6258u;

    // 0x2f6258: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f6258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f625c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x2f625cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2f6260: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2f6260u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6264: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f6264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6268: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f6268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f626c: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x2f626cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x2f6270: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2f6270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6274: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x2f6274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x2f6278: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f6278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f627c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f627cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f6280: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2f6280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2f6284: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2f6284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2f6288: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x2f6288u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f628c: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x2f628cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x2f6290: 0xc0bce84  jal         func_2F3A10
    ctx->pc = 0x2F6290u;
    SET_GPR_U32(ctx, 31, 0x2F6298u);
    ctx->pc = 0x2F6294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6290u;
    // 0x2f6294: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3A10u, 0x2F6290u, 0x2F6298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6298u;
label_2f6298:
    // 0x2f6298: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2f6298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f629c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f629cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f62a0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2f62a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f62a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F62A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F62A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62A4u;
        // 0x2f62a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F62A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F62ACu;
    // 0x2f62ac: 0x0  nop
    ctx->pc = 0x2f62acu;
    // NOP
    ctx->pc = 0x2f62b0u;
}
