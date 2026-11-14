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

// Function: sub_004ED7F0
// Address: 0x4ed7f0 - 0x4ed820
void sub_004ED7F0_0x4ed7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED7F0_0x4ed7f0");
#endif

    switch (ctx->pc) {
        case 0x4ed800u: goto label_4ed800;
        default: break;
    }

    ctx->pc = 0x4ed7f0u;

    // 0x4ed7f0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ed7f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4ed7f4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ed7f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4ed7f8: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed7f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED7F8 raw=0x7469625C");
    // 0x4ed7fc: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed7fcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4ED7FC raw=0x7370616D");
label_4ed800:
    // 0x4ed800: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4ed800u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
    // 0x4ed804: 0x7865745c  lq          $a1, 0x745C($v1)
    ctx->pc = 0x4ed804u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29788)));
    // 0x4ed808: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x4ed808u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
    // 0x4ed80c: 0x74535c73  .word       0x74535C73                   # INVALID     $v0, $s3, 0x5C73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed80cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED80C raw=0x74535C73");
    // 0x4ed810: 0x74614d64  .word       0x74614D64                   # INVALID     $v1, $at, 0x4D64 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed810u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED810 raw=0x74614D64");
    // 0x4ed814: 0x6e692e73  ldr         $t1, 0x2E73($s3)
    ctx->pc = 0x4ed814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 11891); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ed818: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ed818u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
    // 0x4ed81c: 0x0  nop
    ctx->pc = 0x4ed81cu;
    // NOP
    ctx->pc = 0x4ed820u;
}
