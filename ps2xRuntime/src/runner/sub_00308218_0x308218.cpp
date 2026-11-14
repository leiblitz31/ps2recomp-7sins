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

// Function: sub_00308218
// Address: 0x308218 - 0x3082d8
void sub_00308218_0x308218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308218_0x308218");
#endif

    switch (ctx->pc) {
        case 0x308220u: goto label_308220;
        case 0x308254u: goto label_308254;
        case 0x30825cu: goto label_30825c;
        case 0x308278u: goto label_308278;
        case 0x308290u: goto label_308290;
        case 0x3082a8u: goto label_3082a8;
        case 0x3082b0u: goto label_3082b0;
        default: break;
    }

    ctx->pc = 0x308218u;

label_308218:
    // 0x308218: 0x80c1d9e  j           func_307678
    ctx->pc = 0x308218u;
    ctx->pc = 0x307678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307678u, 0x308218u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x308220u;
label_308220:
    // 0x308220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x308220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x308224: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x308224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x308228: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x308228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30822c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x30822cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x308230: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308234: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x308234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308238: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x308238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30823c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x30823cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x308240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x308240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308244: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x308244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x308248: 0x2484adb0  addiu       $a0, $a0, -0x5250
    ctx->pc = 0x308248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946224));
    // 0x30824c: 0xc0c2040  jal         func_308100
    ctx->pc = 0x30824Cu;
    SET_GPR_U32(ctx, 31, 0x308254u);
    ctx->pc = 0x308250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30824Cu;
    // 0x308250: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308100u, 0x30824Cu, 0x308254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308254u;
label_308254:
    // 0x308254: 0xc0c2086  jal         func_308218
    ctx->pc = 0x308254u;
    SET_GPR_U32(ctx, 31, 0x30825Cu);
    ctx->pc = 0x308218u;
    goto label_308218;
    ctx->pc = 0x30825Cu;
label_30825c:
    // 0x30825c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x30825cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x308260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x308260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308264: 0x8c470fc0  lw          $a3, 0xFC0($v0)
    ctx->pc = 0x308264u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4F0FC0u));
    // 0x308268: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x308268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30826c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30826cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308270: 0xc0bf5ec  jal         func_2FD7B0
    ctx->pc = 0x308270u;
    SET_GPR_U32(ctx, 31, 0x308278u);
    ctx->pc = 0x308274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308270u;
    // 0x308274: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD7B0u, 0x308270u, 0x308278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308278u;
label_308278:
    // 0x308278: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x308278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30827c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x30827cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308280: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x308280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308288: 0x3e00008  jr          $ra
    ctx->pc = 0x308288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308288u;
        // 0x30828c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308290u;
label_308290:
    // 0x308290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x308290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x308294: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x308294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x308298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30829c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3082a0: 0xc0c2040  jal         func_308100
    ctx->pc = 0x3082A0u;
    SET_GPR_U32(ctx, 31, 0x3082A8u);
    ctx->pc = 0x3082A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082A0u;
    // 0x3082a4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308100u, 0x3082A0u, 0x3082A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082A8u;
label_3082a8:
    // 0x3082a8: 0xc0c2086  jal         func_308218
    ctx->pc = 0x3082A8u;
    SET_GPR_U32(ctx, 31, 0x3082B0u);
    ctx->pc = 0x3082ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082A8u;
    // 0x3082ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308218u;
    goto label_308218;
    ctx->pc = 0x3082B0u;
label_3082b0:
    // 0x3082b0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3082b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3082b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3082b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3082b8: 0x8c460fc0  lw          $a2, 0xFC0($v0)
    ctx->pc = 0x3082b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4F0FC0u));
    // 0x3082bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3082bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3082c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3082c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3082c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3082c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3082c8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3082c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3082cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3082ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3082d0: 0x80bf5e8  j           func_2FD7A0
    ctx->pc = 0x3082D0u;
    ctx->pc = 0x3082D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082D0u;
    // 0x3082d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD7A0u, 0x3082D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3082D8u;
}
