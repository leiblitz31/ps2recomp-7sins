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

// Function: sub_004E1210
// Address: 0x4e1210 - 0x4e1220
void sub_004E1210_0x4e1210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1210_0x4e1210");
#endif

    ctx->pc = 0x4e1210u;

    // 0x4e1210: 0x44414853  .word       0x44414853                   # cfc1        $at, $9 # 00000053 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e1210u;
    SET_GPR_U32(ctx, 1, 0); // Unimplemented FCR9
    // 0x4e1214: 0x2053574f  addi        $s3, $v0, 0x574F
    ctx->pc = 0x4e1214u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)22351, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x4e1218: 0x4f202020  .word       0x4F202020                   # INVALID     $t9, $zero, 0x2020 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1218u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E1218 raw=0x4F202020");
    // 0x4e121c: 0xa4646  .word       0x000A4646                   # srlv        $t0, $t2, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e121cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 0) & 0x1F));
    ctx->pc = 0x4e1220u;
}
