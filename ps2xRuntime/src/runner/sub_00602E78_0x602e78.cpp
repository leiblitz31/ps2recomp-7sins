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

// Function: sub_00602E78
// Address: 0x602e78 - 0x602ed8
void sub_00602E78_0x602e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00602E78_0x602e78");
#endif

    ctx->pc = 0x602e78u;

    // 0x602e78: 0xc9fc3776  lwc2        $28, 0x3776($t7)
    ctx->pc = 0x602e78u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x602E78 raw=0xC9FC3776");
    // 0x602e7c: 0x45c99a6f  .word       0x45C99A6F                   # INVALID     $t6, $t1, -0x6591 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602e7cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xE, function 0x2F at 0x602E7C raw=0x45C99A6F");
    // 0x602e80: 0xa45095b6  sh          $s0, -0x6A4A($v0)
    ctx->pc = 0x602e80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294940086), (uint16_t)GPR_U32(ctx, 16));
    // 0x602e84: 0x17c7869e  bne         $fp, $a3, . + 4 + (-0x7962 << 2)
    ctx->pc = 0x602E84u;
    {
        const bool branch_taken_0x602e84 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 7));
        ctx->pc = 0x602E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x602E84u;
        // 0x602e88: 0xdb230d25  lqc2        $vf3, 0xD25($t9) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 25), 3365)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x602e84) {
            ctx->pc = 0x5E4900u;
            return;
        }
    }
    ctx->pc = 0x602E8Cu;
    // 0x602e8c: 0x405b07bf  .word       0x405B07BF                   # cfc0        $k1, Index # 000007BF <InstrIdType: R5900_COP0>
    ctx->pc = 0x602e8cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x602E8C raw=0x405B07BF");
    // 0x602e90: 0xef556ca5  .word       0xEF556CA5                   # INVALID     $k0, $s5, 0x6CA5 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602e90u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x602E90 raw=0xEF556CA5");
    // 0x602e94: 0x5654aad3  bnel        $s2, $s4, . + 4 + (-0x552D << 2)
    ctx->pc = 0x602E94u;
    {
        const bool branch_taken_0x602e94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x602e94) {
            ctx->pc = 0x602E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x602E94u;
            // 0x602e98: 0xcc95f5b6  pref        0x15, -0xA4A($a0) (Delay Slot)
            // PREF instruction (ignored)
            ctx->in_delay_slot = false;
            ctx->pc = 0x5ED9E4u;
            return;
        }
    }
    ctx->pc = 0x602E9Cu;
    // 0x602e9c: 0x4647583a  .word       0x4647583A                   # INVALID     $s2, $a3, 0x583A # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602e9cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3A at 0x602E9C raw=0x4647583A");
    // 0x602ea0: 0xb9b13a91  swr         $s1, 0x3A91($t5)
    ctx->pc = 0x602ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 14993); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x602ea4: 0x1ac0402b  blez        $s6, . + 4 + (0x402B << 2)
    ctx->pc = 0x602EA4u;
    {
        const bool branch_taken_0x602ea4 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x602ea4) {
            ctx->pc = 0x612F54u;
            return;
        }
    }
    ctx->pc = 0x602EACu;
    // 0x602eac: 0x0  nop
    ctx->pc = 0x602eacu;
    // NOP
    // 0x602eb0: 0x604c1f99  daddi       $t4, $v0, 0x1F99
    ctx->pc = 0x602eb0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 2); int64_t imm = (int64_t)(int32_t)8089; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
    // 0x602eb4: 0x4dcaa9ef  .word       0x4DCAA9EF                   # INVALID     $t6, $t2, -0x5611 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602eb4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602EB4 raw=0x4DCAA9EF");
    // 0x602eb8: 0x868e87b3  lh          $t6, -0x784D($s4)
    ctx->pc = 0x602eb8u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294936499)));
    // 0x602ebc: 0x3a52e993  xori        $s2, $s2, 0xE993
    ctx->pc = 0x602ebcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)59795);
    // 0x602ec0: 0x4b2f74  teq         $v0, $t3, 189
    ctx->pc = 0x602ec0u;
    if (GPR_U64(ctx, 2) == GPR_U64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x602ec4: 0x4b2f60  .word       0x004B2F60                   # add         $a1, $v0, $t3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602ec4u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x602ec8: 0x4b2f6c  .word       0x004B2F6C                   # dadd        $a1, $v0, $t3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602ec8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 2); int64_t b = (int64_t)GPR_S64(ctx, 11); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
    // 0x602ecc: 0x4b2f74  teq         $v0, $t3, 189
    ctx->pc = 0x602eccu;
    if (GPR_U64(ctx, 2) == GPR_U64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x602ed0: 0x4b2f74  teq         $v0, $t3, 189
    ctx->pc = 0x602ed0u;
    if (GPR_U64(ctx, 2) == GPR_U64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x602ed4: 0x0  nop
    ctx->pc = 0x602ed4u;
    // NOP
    ctx->pc = 0x602ed8u;
}
