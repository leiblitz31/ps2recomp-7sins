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

// Function: sub_004E2A20
// Address: 0x4e2a20 - 0x4e2a58
void sub_004E2A20_0x4e2a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2A20_0x4e2a20");
#endif

    ctx->pc = 0x4e2a20u;

    // 0x4e2a20: 0x7478656e  .word       0x7478656E                   # INVALID     $v1, $t8, 0x656E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2a20u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2A20 raw=0x7478656E");
    // 0x4e2a24: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4e2a24u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
    // 0x4e2a28: 0x746e656c  .word       0x746E656C                   # INVALID     $v1, $t6, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2a28u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2A28 raw=0x746E656C");
    // 0x4e2a2c: 0x636e6172  daddi       $t6, $k1, 0x6172
    ctx->pc = 0x4e2a2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24946; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4e2a30: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2a30u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e2a34: 0x0  nop
    ctx->pc = 0x4e2a34u;
    // NOP
    // 0x4e2a38: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2a38u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E2A38 raw=0x00000001");
    // 0x4e2a3c: 0x0  nop
    ctx->pc = 0x4e2a3cu;
    // NOP
    // 0x4e2a40: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4e2a40u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
    // 0x4e2a44: 0x0  nop
    ctx->pc = 0x4e2a44u;
    // NOP
    // 0x4e2a48: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2a48u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E2A48 raw=0x00000001");
    // 0x4e2a4c: 0x0  nop
    ctx->pc = 0x4e2a4cu;
    // NOP
    // 0x4e2a50: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4e2a50u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
    // 0x4e2a54: 0x0  nop
    ctx->pc = 0x4e2a54u;
    // NOP
    ctx->pc = 0x4e2a58u;
}
