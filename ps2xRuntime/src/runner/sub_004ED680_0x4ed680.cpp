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

// Function: sub_004ED680
// Address: 0x4ed680 - 0x4ed6b0
void sub_004ED680_0x4ed680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED680_0x4ed680");
#endif

    switch (ctx->pc) {
        case 0x4ed6acu: goto label_4ed6ac;
        default: break;
    }

    ctx->pc = 0x4ed680u;

    // 0x4ed680: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ed680u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4ed684: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ed684u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4ed688: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed688u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED688 raw=0x7469625C");
    // 0x4ed68c: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed68cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4ED68C raw=0x7370616D");
    // 0x4ed690: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4ed690u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
    // 0x4ed694: 0x7865745c  lq          $a1, 0x745C($v1)
    ctx->pc = 0x4ed694u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29788)));
    // 0x4ed698: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x4ed698u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
    // 0x4ed69c: 0x6c665c73  ldr         $a2, 0x5C73($v1)
    ctx->pc = 0x4ed69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4ed6a0: 0x73726f6f  .word       0x73726F6F                   # INVALID     $k1, $s2, 0x6F6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed6a0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4ED6A0 raw=0x73726F6F");
    // 0x4ed6a4: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed6a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x4ED6A4 raw=0x0000005C");
    // 0x4ed6a8: 0x0  nop
    ctx->pc = 0x4ed6a8u;
    // NOP
label_4ed6ac:
    // 0x4ed6ac: 0x0  nop
    ctx->pc = 0x4ed6acu;
    // NOP
    ctx->pc = 0x4ed6b0u;
}
