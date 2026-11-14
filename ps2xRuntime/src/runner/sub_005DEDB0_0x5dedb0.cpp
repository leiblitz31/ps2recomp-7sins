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

// Function: sub_005DEDB0
// Address: 0x5dedb0 - 0x5dede0
void sub_005DEDB0_0x5dedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEDB0_0x5dedb0");
#endif

    ctx->pc = 0x5dedb0u;

    // 0x5dedb0: 0x6f727245  ldr         $s2, 0x7245($k1)
    ctx->pc = 0x5dedb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29253); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x5dedb4: 0x6e692072  ldr         $t1, 0x2072($s3)
    ctx->pc = 0x5dedb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5dedb8: 0x646f6d20  daddiu      $t7, $v1, 0x6D20
    ctx->pc = 0x5dedb8u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27936);
    // 0x5dedbc: 0x20656c75  addi        $a1, $v1, 0x6C75
    ctx->pc = 0x5dedbcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27765, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5dedc0: 0x74696e69  .word       0x74696E69                   # INVALID     $v1, $t1, 0x6E69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dedc0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEDC0 raw=0x74696E69");
    // 0x5dedc4: 0x696c6169  ldl         $t4, 0x6169($t3)
    ctx->pc = 0x5dedc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x5dedc8: 0x69746173  ldl         $s4, 0x6173($t3)
    ctx->pc = 0x5dedc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5dedcc: 0x70206e6f  .word       0x70206E6F                   # INVALID     $at, $zero, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dedccu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DEDCC raw=0x70206E6F");
    // 0x5dedd0: 0x6d617261  ldr         $at, 0x7261($t3)
    ctx->pc = 0x5dedd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5dedd4: 0x72657465  .word       0x72657465                   # INVALID     $s3, $a1, 0x7465 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dedd4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DEDD4 raw=0x72657465");
    // 0x5dedd8: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x5dedd8u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5deddc: 0x0  nop
    ctx->pc = 0x5deddcu;
    // NOP
    ctx->pc = 0x5dede0u;
}
