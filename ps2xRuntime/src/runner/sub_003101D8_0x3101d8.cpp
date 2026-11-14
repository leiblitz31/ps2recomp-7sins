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

// Function: sub_003101D8
// Address: 0x3101d8 - 0x310230
void sub_003101D8_0x3101d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003101D8_0x3101d8");
#endif

    switch (ctx->pc) {
        case 0x3101ecu: goto label_3101ec;
        default: break;
    }

    ctx->pc = 0x3101d8u;

    // 0x3101d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3101d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3101dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3101dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3101e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3101e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3101e4: 0xc0bdfd4  jal         func_2F7F50
    ctx->pc = 0x3101E4u;
    SET_GPR_U32(ctx, 31, 0x3101ECu);
    ctx->pc = 0x3101E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3101E4u;
    // 0x3101e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7F50u, 0x3101E4u, 0x3101ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3101ECu;
label_3101ec:
    // 0x3101ec: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3101ECu;
    {
        const bool branch_taken_0x3101ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3101F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101ECu;
        // 0x3101f0: 0x24040334  addiu       $a0, $zero, 0x334 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101ec) {
            ctx->pc = 0x31021Cu;
            goto label_31021c;
        }
    }
    ctx->pc = 0x3101F4u;
    // 0x3101f4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3101f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x3101f8: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x3101f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3101fc: 0x24637e40  addiu       $v1, $v1, 0x7E40
    ctx->pc = 0x3101fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32320));
    // 0x310200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310204: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x310204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x310208: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x310208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31020c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x31020cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x310210: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x310210u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310214: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x310214u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x310218: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x310218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_31021c:
    // 0x31021c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31021cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x310220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310224: 0x3e00008  jr          $ra
    ctx->pc = 0x310224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310224u;
        // 0x310228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31022Cu;
    // 0x31022c: 0x0  nop
    ctx->pc = 0x31022cu;
    // NOP
    ctx->pc = 0x310230u;
}
