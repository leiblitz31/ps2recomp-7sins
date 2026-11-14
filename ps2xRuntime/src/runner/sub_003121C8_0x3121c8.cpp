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

// Function: sub_003121C8
// Address: 0x3121c8 - 0x312260
void sub_003121C8_0x3121c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003121C8_0x3121c8");
#endif

    switch (ctx->pc) {
        case 0x3121ecu: goto label_3121ec;
        case 0x312214u: goto label_312214;
        case 0x31223cu: goto label_31223c;
        default: break;
    }

    ctx->pc = 0x3121c8u;

    // 0x3121c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3121c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3121cc: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x3121ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x3121d0: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x3121d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x3121d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3121d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3121d8: 0x24c62260  addiu       $a2, $a2, 0x2260
    ctx->pc = 0x3121d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8800));
    // 0x3121dc: 0x24e72278  addiu       $a3, $a3, 0x2278
    ctx->pc = 0x3121dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8824));
    // 0x3121e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3121e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3121e4: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x3121E4u;
    SET_GPR_U32(ctx, 31, 0x3121ECu);
    ctx->pc = 0x3121E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3121E4u;
    // 0x3121e8: 0x24050127  addiu       $a1, $zero, 0x127 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x3121E4u, 0x3121ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3121ECu;
label_3121ec:
    // 0x3121ec: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3121ECu;
    {
        const bool branch_taken_0x3121ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3121F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3121ECu;
        // 0x3121f0: 0x3c060031  lui         $a2, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3121ec) {
            ctx->pc = 0x31224Cu;
            goto label_31224c;
        }
    }
    ctx->pc = 0x3121F4u;
    // 0x3121f4: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x3121f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x3121f8: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x3121f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
    // 0x3121fc: 0x24c62290  addiu       $a2, $a2, 0x2290
    ctx->pc = 0x3121fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8848));
    // 0x312200: 0x24e722a8  addiu       $a3, $a3, 0x22A8
    ctx->pc = 0x312200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8872));
    // 0x312204: 0x250822b0  addiu       $t0, $t0, 0x22B0
    ctx->pc = 0x312204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8880));
    // 0x312208: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x312208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31220c: 0xc108312  jal         func_420C48
    ctx->pc = 0x31220Cu;
    SET_GPR_U32(ctx, 31, 0x312214u);
    ctx->pc = 0x312210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31220Cu;
    // 0x312210: 0x24050127  addiu       $a1, $zero, 0x127 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420C48u, 0x31220Cu, 0x312214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312214u;
label_312214:
    // 0x312214: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x312214u;
    {
        const bool branch_taken_0x312214 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x312218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312214u;
        // 0x312218: 0xaf82a584  sw          $v0, -0x5A7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312214) {
            ctx->pc = 0x31224Cu;
            goto label_31224c;
        }
    }
    ctx->pc = 0x31221Cu;
    // 0x31221c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x31221cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x312220: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x312220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x312224: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x312224u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x312228: 0x24a522d0  addiu       $a1, $a1, 0x22D0
    ctx->pc = 0x312228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8912));
    // 0x31222c: 0x24c62330  addiu       $a2, $a2, 0x2330
    ctx->pc = 0x31222cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9008));
    // 0x312230: 0x24e72390  addiu       $a3, $a3, 0x2390
    ctx->pc = 0x312230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9104));
    // 0x312234: 0xc105976  jal         func_4165D8
    ctx->pc = 0x312234u;
    SET_GPR_U32(ctx, 31, 0x31223Cu);
    ctx->pc = 0x312238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312234u;
    // 0x312238: 0x24040127  addiu       $a0, $zero, 0x127 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4165D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4165D8u, 0x312234u, 0x31223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31223Cu;
label_31223c:
    // 0x31223c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x31223cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x312240: 0xaf82a588  sw          $v0, -0x5A78($gp)
    ctx->pc = 0x312240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944136), GPR_U32(ctx, 2));
    // 0x312244: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x312244u;
    {
        const bool branch_taken_0x312244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312244u;
        // 0x312248: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312244) {
            ctx->pc = 0x312250u;
            goto label_312250;
        }
    }
    ctx->pc = 0x31224Cu;
label_31224c:
    // 0x31224c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31224cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312250:
    // 0x312250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312254: 0x3e00008  jr          $ra
    ctx->pc = 0x312254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312254u;
        // 0x312258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31225Cu;
    // 0x31225c: 0x0  nop
    ctx->pc = 0x31225cu;
    // NOP
    ctx->pc = 0x312260u;
}
