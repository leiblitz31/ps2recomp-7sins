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

// Function: sub_004E1260
// Address: 0x4e1260 - 0x4e1280
void sub_004E1260_0x4e1260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1260_0x4e1260");
#endif

    ctx->pc = 0x4e1260u;

    // 0x4e1260: 0x4d637464  .word       0x4D637464                   # INVALID     $t3, $v1, 0x7464 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e1260u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E1260 raw=0x4D637464");
    // 0x4e1264: 0x726f6d65  .word       0x726F6D65                   # INVALID     $s3, $t7, 0x6D65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1264u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E1264 raw=0x726F6D65");
    // 0x4e1268: 0x72614379  .word       0x72614379                   # INVALID     $s3, $at, 0x4379 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e1268u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x4E1268 raw=0x72614379");
    // 0x4e126c: 0x493a3a64  .word       0x493A3A64                   # INVALID     $t1, $k0, 0x3A64 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4e126cu;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x4E126C raw=0x493A3A64");
    // 0x4e1270: 0x2074696e  addi        $s4, $v1, 0x696E
    ctx->pc = 0x4e1270u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26990, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x4e1274: 0x6166203a  daddi       $a2, $t3, 0x203A
    ctx->pc = 0x4e1274u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8250; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
    // 0x4e1278: 0x64656c69  daddiu      $a1, $v1, 0x6C69
    ctx->pc = 0x4e1278u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27753);
    // 0x4e127c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x4e127cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->pc = 0x4e1280u;
}
