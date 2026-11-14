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

// Function: sub_004E5160
// Address: 0x4e5160 - 0x4e5180
void sub_004E5160_0x4e5160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5160_0x4e5160");
#endif

    ctx->pc = 0x4e5160u;

    // 0x4e5160: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e5160u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e5164: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e5164u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e5168: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5168u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5168 raw=0x7469625C");
    // 0x4e516c: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e516cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E516C raw=0x7370616D");
    // 0x4e5170: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4e5170u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
    // 0x4e5174: 0x6475685c  daddiu      $s5, $v1, 0x685C
    ctx->pc = 0x4e5174u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26716);
    // 0x4e5178: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5178u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x4E5178 raw=0x0000005C");
    // 0x4e517c: 0x0  nop
    ctx->pc = 0x4e517cu;
    // NOP
    ctx->pc = 0x4e5180u;
}
