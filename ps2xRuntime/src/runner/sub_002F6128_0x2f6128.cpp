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

// Function: sub_002F6128
// Address: 0x2f6128 - 0x2f6200
void sub_002F6128_0x2f6128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6128_0x2f6128");
#endif

    switch (ctx->pc) {
        case 0x2f6178u: goto label_2f6178;
        case 0x2f6198u: goto label_2f6198;
        case 0x2f61e0u: goto label_2f61e0;
        default: break;
    }

    ctx->pc = 0x2f6128u;

    // 0x2f6128: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f6128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f612c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f6130: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2f6130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2f6134: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f6134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6138: 0x8c49ea90  lw          $t1, -0x1570($v0)
    ctx->pc = 0x2f6138u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2f613c: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x2f613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x2f6140: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2f6140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2f6144: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2f6144u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6148: 0x10180a  movz        $v1, $zero, $s0
    ctx->pc = 0x2f6148u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2f614c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f614cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6150: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f6150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6154: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2f6154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6158: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2f6158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2f615c: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x2f615cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f6160: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x2f6160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x2f6164: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2f6164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2f6168: 0xafa90054  sw          $t1, 0x54($sp)
    ctx->pc = 0x2f6168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 9));
    // 0x2f616c: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x2f616cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x2f6170: 0xc0bce84  jal         func_2F3A10
    ctx->pc = 0x2F6170u;
    SET_GPR_U32(ctx, 31, 0x2F6178u);
    ctx->pc = 0x2F6174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6170u;
    // 0x2f6174: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3A10u, 0x2F6170u, 0x2F6178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6178u;
label_2f6178:
    // 0x2f6178: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6178u;
    {
        const bool branch_taken_0x2f6178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6178u;
        // 0x2f617c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6178) {
            ctx->pc = 0x2F6184u;
            goto label_2f6184;
        }
    }
    ctx->pc = 0x2F6180u;
    // 0x2f6180: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2f6180u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f6184:
    // 0x2f6184: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2f6184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f6188: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2f6188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2f618c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F618Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F618Cu;
        // 0x2f6190: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F618Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6194u;
    // 0x2f6194: 0x0  nop
    ctx->pc = 0x2f6194u;
    // NOP
label_2f6198:
    // 0x2f6198: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f6198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f619c: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x2f619cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x2f61a0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2f61a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2f61a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f61a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f61a8: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2f61a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2f61ac: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x2f61acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x2f61b0: 0x10180a  movz        $v1, $zero, $s0
    ctx->pc = 0x2f61b0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2f61b4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2f61b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f61b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f61b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f61bc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2f61bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f61c0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2f61c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f61c4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2f61c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2f61c8: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x2f61c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f61cc: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x2f61ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x2f61d0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2f61d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2f61d4: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x2f61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x2f61d8: 0xc0bce84  jal         func_2F3A10
    ctx->pc = 0x2F61D8u;
    SET_GPR_U32(ctx, 31, 0x2F61E0u);
    ctx->pc = 0x2F61DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F61D8u;
    // 0x2f61dc: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3A10u, 0x2F61D8u, 0x2F61E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F61E0u;
label_2f61e0:
    // 0x2f61e0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F61E0u;
    {
        const bool branch_taken_0x2f61e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F61E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61E0u;
        // 0x2f61e4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f61e0) {
            ctx->pc = 0x2F61ECu;
            goto label_2f61ec;
        }
    }
    ctx->pc = 0x2F61E8u;
    // 0x2f61e8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2f61e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f61ec:
    // 0x2f61ec: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2f61ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f61f0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2f61f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2f61f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F61F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61F4u;
        // 0x2f61f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F61F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F61FCu;
    // 0x2f61fc: 0x0  nop
    ctx->pc = 0x2f61fcu;
    // NOP
    ctx->pc = 0x2f6200u;
}
