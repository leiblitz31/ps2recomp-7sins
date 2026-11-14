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

// Function: sub_003008C8
// Address: 0x3008c8 - 0x300948
void sub_003008C8_0x3008c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003008C8_0x3008c8");
#endif

    switch (ctx->pc) {
        case 0x300900u: goto label_300900;
        case 0x300924u: goto label_300924;
        case 0x300934u: goto label_300934;
        default: break;
    }

    ctx->pc = 0x3008c8u;

    // 0x3008c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3008c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3008cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3008ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3008d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3008d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3008d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3008d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3008d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3008d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3008dc: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x3008dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x3008e0: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x3008e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x3008e4: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x3008e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x3008e8: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x3008e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x3008ec: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x3008ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x3008f0: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x3008f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x3008f4: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x3008f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x3008f8: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x3008F8u;
    SET_GPR_U32(ctx, 31, 0x300900u);
    ctx->pc = 0x3008FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3008F8u;
    // 0x3008fc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x3008F8u, 0x300900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300900u;
label_300900:
    // 0x300900: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300904: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x300904u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x300908: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x300908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30090c: 0x248406e0  addiu       $a0, $a0, 0x6E0
    ctx->pc = 0x30090cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1760));
    // 0x300910: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x300910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300914: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x300914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300918: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x300918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x30091c: 0xc0bfe52  jal         func_2FF948
    ctx->pc = 0x30091Cu;
    SET_GPR_U32(ctx, 31, 0x300924u);
    ctx->pc = 0x300920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30091Cu;
    // 0x300920: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF948u, 0x30091Cu, 0x300924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300924u;
label_300924:
    // 0x300924: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x300924u;
    {
        const bool branch_taken_0x300924 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x300928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300924u;
        // 0x300928: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300924) {
            ctx->pc = 0x300938u;
            goto label_300938;
        }
    }
    ctx->pc = 0x30092Cu;
    // 0x30092c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x30092Cu;
    SET_GPR_U32(ctx, 31, 0x300934u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x30092Cu, 0x300934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300934u;
label_300934:
    // 0x300934: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x300934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_300938:
    // 0x300938: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x300938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30093c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30093cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300940: 0x3e00008  jr          $ra
    ctx->pc = 0x300940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300940u;
        // 0x300944: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300948u;
}
