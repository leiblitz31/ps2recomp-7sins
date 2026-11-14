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

// Function: sub_004B1918
// Address: 0x4b1918 - 0x4b1978
void sub_004B1918_0x4b1918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1918_0x4b1918");
#endif

    switch (ctx->pc) {
        case 0x4b1930u: goto label_4b1930;
        case 0x4b1954u: goto label_4b1954;
        case 0x4b195cu: goto label_4b195c;
        default: break;
    }

    ctx->pc = 0x4b1918u;

    // 0x4b1918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b191c: 0x8f82b904  lw          $v0, -0x46FC($gp)
    ctx->pc = 0x4b191cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949124)));
    // 0x4b1920: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B1920u;
    {
        const bool branch_taken_0x4b1920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1920u;
        // 0x4b1924: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1920) {
            ctx->pc = 0x4B1968u;
            goto label_4b1968;
        }
    }
    ctx->pc = 0x4B1928u;
    // 0x4b1928: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4B1928u;
    SET_GPR_U32(ctx, 31, 0x4B1930u);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4B1928u, 0x4B1930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1930u;
label_4b1930:
    // 0x4b1930: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4b1930u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1934: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b1934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b1938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b193c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b193cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1940: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x4b1940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x4b1944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b1944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1948: 0x278ab904  addiu       $t2, $gp, -0x46FC
    ctx->pc = 0x4b1948u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949124));
    // 0x4b194c: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B194Cu;
    SET_GPR_U32(ctx, 31, 0x4B1954u);
    ctx->pc = 0x4B1950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B194Cu;
    // 0x4b1950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B194Cu, 0x4B1954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1954u;
label_4b1954:
    // 0x4b1954: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4B1954u;
    SET_GPR_U32(ctx, 31, 0x4B195Cu);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4B1954u, 0x4B195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B195Cu;
label_4b195c:
    // 0x4b195c: 0x8f83b904  lw          $v1, -0x46FC($gp)
    ctx->pc = 0x4b195cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949124)));
    // 0x4b1960: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B1960u;
    {
        const bool branch_taken_0x4b1960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1960u;
        // 0x4b1964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1960) {
            ctx->pc = 0x4B196Cu;
            goto label_4b196c;
        }
    }
    ctx->pc = 0x4B1968u;
label_4b1968:
    // 0x4b1968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b1968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b196c:
    // 0x4b196c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b196cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1970: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1970u;
        // 0x4b1974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1978u;
}
