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

// Function: sub_004E6D68
// Address: 0x4e6d68 - 0x4e6d98
void sub_004E6D68_0x4e6d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6D68_0x4e6d68");
#endif

    ctx->pc = 0x4e6d68u;

    // 0x4e6d68: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6D68u;
    {
        const bool branch_taken_0x4e6d68 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6d68) {
            ctx->pc = 0x4E6D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6D68u;
            // 0x4e6d6c: 0x30257372  andi        $a1, $at, 0x7372 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29554);
            ctx->in_delay_slot = false;
            ctx->pc = 0x504F3Cu;
            return;
        }
    }
    ctx->pc = 0x4E6D70u;
    // 0x4e6d70: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x4e6d70u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e6d74: 0x0  nop
    ctx->pc = 0x4e6d74u;
    // NOP
    // 0x4e6d78: 0x0  nop
    ctx->pc = 0x4e6d78u;
    // NOP
    // 0x4e6d7c: 0x0  nop
    ctx->pc = 0x4e6d7cu;
    // NOP
    // 0x4e6d80: 0x608418  .word       0x00608418                   # mult        $s0, $v1, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e6d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x4e6d84: 0x60841c  .word       0x0060841C                   # dmult       $v1, $zero # 00008400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6d84u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x4E6D84 raw=0x0060841C");
    // 0x4e6d88: 0x608420  .word       0x00608420                   # add         $s0, $v1, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6d88u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x4e6d8c: 0x608424  .word       0x00608424                   # and         $s0, $v1, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6d8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 0));
    // 0x4e6d90: 0x608428  .word       0x00608428                   # mfsa        $s0 # 00600400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e6d90u;
    SET_GPR_U32(ctx, 16, ctx->sa);
    // 0x4e6d94: 0x60842c  .word       0x0060842C                   # dadd        $s0, $v1, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6d94u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
    ctx->pc = 0x4e6d98u;
}
