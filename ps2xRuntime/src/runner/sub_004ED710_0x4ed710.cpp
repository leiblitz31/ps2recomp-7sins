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

// Function: sub_004ED710
// Address: 0x4ed710 - 0x4ed790
void sub_004ED710_0x4ed710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED710_0x4ed710");
#endif

    switch (ctx->pc) {
        case 0x4ed718u: goto label_4ed718;
        case 0x4ed774u: goto label_4ed774;
        default: break;
    }

    ctx->pc = 0x4ed710u;

    // 0x4ed710: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ed710u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4ed714: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ed714u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4ed718:
    // 0x4ed718: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed718u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED718 raw=0x7469625C");
    // 0x4ed71c: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed71cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4ED71C raw=0x7370616D");
    // 0x4ed720: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4ed720u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
    // 0x4ed724: 0x7865745c  lq          $a1, 0x745C($v1)
    ctx->pc = 0x4ed724u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29788)));
    // 0x4ed728: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x4ed728u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
    // 0x4ed72c: 0x5c73  tltu        $zero, $zero, 369
    ctx->pc = 0x4ed72cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4ed730: 0x6d666564  ldr         $a2, 0x6564($t3)
    ctx->pc = 0x4ed730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25956); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4ed734: 0x30307461  andi        $s0, $at, 0x7461
    ctx->pc = 0x4ed734u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29793);
    // 0x4ed738: 0x706d622e  .word       0x706D622E                   # INVALID     $v1, $t5, 0x622E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed738u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4ED738 raw=0x706D622E");
    // 0x4ed73c: 0x0  nop
    ctx->pc = 0x4ed73cu;
    // NOP
    // 0x4ed740: 0x6d666564  ldr         $a2, 0x6564($t3)
    ctx->pc = 0x4ed740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25956); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4ed744: 0x31307461  andi        $s0, $t1, 0x7461
    ctx->pc = 0x4ed744u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)29793);
    // 0x4ed748: 0x706d622e  .word       0x706D622E                   # INVALID     $v1, $t5, 0x622E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed748u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4ED748 raw=0x706D622E");
    // 0x4ed74c: 0x0  nop
    ctx->pc = 0x4ed74cu;
    // NOP
    // 0x4ed750: 0x6d666564  ldr         $a2, 0x6564($t3)
    ctx->pc = 0x4ed750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25956); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4ed754: 0x32307461  andi        $s0, $s1, 0x7461
    ctx->pc = 0x4ed754u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)29793);
    // 0x4ed758: 0x706d622e  .word       0x706D622E                   # INVALID     $v1, $t5, 0x622E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed758u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4ED758 raw=0x706D622E");
    // 0x4ed75c: 0x0  nop
    ctx->pc = 0x4ed75cu;
    // NOP
    // 0x4ed760: 0x6d666564  ldr         $a2, 0x6564($t3)
    ctx->pc = 0x4ed760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25956); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4ed764: 0x33307461  andi        $s0, $t9, 0x7461
    ctx->pc = 0x4ed764u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)29793);
    // 0x4ed768: 0x706d622e  .word       0x706D622E                   # INVALID     $v1, $t5, 0x622E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed768u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4ED768 raw=0x706D622E");
    // 0x4ed76c: 0x0  nop
    ctx->pc = 0x4ed76cu;
    // NOP
    // 0x4ed770: 0x4ed730  tge         $v0, $t6, 860
    ctx->pc = 0x4ed770u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4ed774:
    // 0x4ed774: 0x4ed740  .word       0x004ED740                   # sll         $k0, $t6, 29 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed774u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 14), 29));
    // 0x4ed778: 0x4ed750  .word       0x004ED750                   # mfhi        $k0 # 004E0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed778u;
    SET_GPR_U64(ctx, 26, ctx->hi);
    // 0x4ed77c: 0x4ed760  .word       0x004ED760                   # add         $k0, $v0, $t6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed77cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
    // 0x4ed780: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4ed780u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4ed784: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4ed784u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4ed788: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4ed788u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    // 0x4ed78c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x4ed78cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
    ctx->pc = 0x4ed790u;
}
