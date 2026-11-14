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

// Function: sub_004E4208
// Address: 0x4e4208 - 0x4e4218
void sub_004E4208_0x4e4208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4208_0x4e4208");
#endif

    ctx->pc = 0x4e4208u;

    // 0x4e4208: 0x30256762  andi        $a1, $at, 0x6762
    ctx->pc = 0x4e4208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)26466);
    // 0x4e420c: 0x64616432  daddiu      $at, $v1, 0x6432
    ctx->pc = 0x4e420cu;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25650);
    // 0x4e4210: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4210u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x4e4214: 0x0  nop
    ctx->pc = 0x4e4214u;
    // NOP
    ctx->pc = 0x4e4218u;
}
