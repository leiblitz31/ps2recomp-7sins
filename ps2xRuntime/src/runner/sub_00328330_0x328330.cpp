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

// Function: sub_00328330
// Address: 0x328330 - 0x3283e0
void sub_00328330_0x328330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328330_0x328330");
#endif

    switch (ctx->pc) {
        case 0x32838cu: goto label_32838c;
        case 0x3283a4u: goto label_3283a4;
        case 0x3283b0u: goto label_3283b0;
        case 0x3283c0u: goto label_3283c0;
        default: break;
    }

    ctx->pc = 0x328330u;

label_328330:
    // 0x328330: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x328330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x328334: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x328334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328338: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x328338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32833c: 0x3e00008  jr          $ra
    ctx->pc = 0x32833Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32833Cu;
        // 0x328340: 0xac830044  sw          $v1, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32833Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328344u;
    // 0x328344: 0x0  nop
    ctx->pc = 0x328344u;
    // NOP
    // 0x328348: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x328348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32834c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32834cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x328350: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x328350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x328354: 0x8c43231c  lw          $v1, 0x231C($v0)
    ctx->pc = 0x328354u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F231Cu));
    // 0x328358: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x328358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32835c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32835cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x328360: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x328360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x328364: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x328364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32836c: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x32836cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x328370: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x328370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x328374: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x328374u;
    {
        const bool branch_taken_0x328374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x328378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328374u;
        // 0x328378: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328374) {
            ctx->pc = 0x3283C8u;
            goto label_3283c8;
        }
    }
    ctx->pc = 0x32837Cu;
    // 0x32837c: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32837Cu;
    {
        const bool branch_taken_0x32837c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32837c) {
            ctx->pc = 0x328380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32837Cu;
            // 0x328380: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328394u;
            goto label_328394;
        }
    }
    ctx->pc = 0x328384u;
    // 0x328384: 0xc0ca0cc  jal         func_328330
    ctx->pc = 0x328384u;
    SET_GPR_U32(ctx, 31, 0x32838Cu);
    ctx->pc = 0x328388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328384u;
    // 0x328388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328330u;
    goto label_328330;
    ctx->pc = 0x32838Cu;
label_32838c:
    // 0x32838c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32838cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328390: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x328390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_328394:
    // 0x328394: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x328394u;
    {
        const bool branch_taken_0x328394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328394) {
            ctx->pc = 0x328398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328394u;
            // 0x328398: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3283A8u;
            goto label_3283a8;
        }
    }
    ctx->pc = 0x32839Cu;
    // 0x32839c: 0xc0ca09c  jal         func_328270
    ctx->pc = 0x32839Cu;
    SET_GPR_U32(ctx, 31, 0x3283A4u);
    ctx->pc = 0x328270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328270u, 0x32839Cu, 0x3283A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283A4u;
label_3283a4:
    // 0x3283a4: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x3283a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_3283a8:
    // 0x3283a8: 0xc0ca0bc  jal         func_3282F0
    ctx->pc = 0x3283A8u;
    SET_GPR_U32(ctx, 31, 0x3283B0u);
    ctx->pc = 0x3283ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3283A8u;
    // 0x3283ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3282F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3282F0u, 0x3283A8u, 0x3283B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283B0u;
label_3283b0:
    // 0x3283b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3283b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3283b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283b8: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x3283B8u;
    SET_GPR_U32(ctx, 31, 0x3283C0u);
    ctx->pc = 0x3283BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3283B8u;
    // 0x3283bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x3283B8u, 0x3283C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283C0u;
label_3283c0:
    // 0x3283c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3283c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283c4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3283c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3283c8:
    // 0x3283c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3283c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3283cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3283ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3283d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3283d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3283d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3283d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3283d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3283D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3283DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283D8u;
        // 0x3283dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3283D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3283E0u;
}
