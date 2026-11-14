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

// Function: sub_004E6DB0
// Address: 0x4e6db0 - 0x4e6e50
void sub_004E6DB0_0x4e6db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6DB0_0x4e6db0");
#endif

    switch (ctx->pc) {
        case 0x4e6dc4u: goto label_4e6dc4;
        case 0x4e6e10u: goto label_4e6e10;
        case 0x4e6e48u: goto label_4e6e48;
        default: break;
    }

    ctx->pc = 0x4e6db0u;

    // 0x4e6db0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e6db0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e6db4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e6db4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e6db8: 0x756f735c  .word       0x756F735C                   # INVALID     $t3, $t7, 0x735C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6db8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6DB8 raw=0x756F735C");
    // 0x4e6dbc: 0x5c73646e  .word       0x5C73646E                   # bgtzl       $v1, . + 4 + (0x646E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6DBCu;
    {
        const bool branch_taken_0x4e6dbc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e6dbc) {
            ctx->pc = 0x4E6DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6DBCu;
            // 0x4e6dc0: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E6DC0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFF78u;
            return;
        }
    }
    ctx->pc = 0x4E6DC4u;
label_4e6dc4:
    // 0x4e6dc4: 0x6b6e6162  ldl         $t6, 0x6162($k1)
    ctx->pc = 0x4e6dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e6dc8: 0x5f676d5c  .word       0x5F676D5C                   # bgtzl       $k1, . + 4 + (0x6D5C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6DC8u;
    {
        const bool branch_taken_0x4e6dc8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6dc8) {
            ctx->pc = 0x4E6DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6DC8u;
            // 0x4e6dcc: 0x6d616c66  ldr         $at, 0x6C66($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27750); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x50233Cu;
            return;
        }
    }
    ctx->pc = 0x4E6DD0u;
    // 0x4e6dd0: 0x722e7962  .word       0x722E7962                   # INVALID     $s1, $t6, 0x7962 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e6dd0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x4E6DD0 raw=0x722E7962");
    // 0x4e6dd4: 0x7377  .word       0x00007377                   # INVALID     $zero, $zero, 0x7377 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6dd4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x4E6DD4 raw=0x00007377");
    // 0x4e6dd8: 0x0  nop
    ctx->pc = 0x4e6dd8u;
    // NOP
    // 0x4e6ddc: 0x0  nop
    ctx->pc = 0x4e6ddcu;
    // NOP
    // 0x4e6de0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e6de0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e6de4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e6de4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e6de8: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e6de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e6dec: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6DECu;
    {
        const bool branch_taken_0x4e6dec = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e6dec) {
            ctx->pc = 0x4E6DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6DECu;
            // 0x4e6df0: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501F84u;
            return;
        }
    }
    ctx->pc = 0x4E6DF4u;
    // 0x4e6df4: 0x656d6167  daddiu      $t5, $t3, 0x6167
    ctx->pc = 0x4e6df4u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
    // 0x4e6df8: 0x6e705c73  ldr         $s0, 0x5C73($s3)
    ctx->pc = 0x4e6df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x4e6dfc: 0x6c665f6c  ldr         $a2, 0x5F6C($v1)
    ctx->pc = 0x4e6dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4e6e00: 0x79626d61  lq          $v0, 0x6D61($t3)
    ctx->pc = 0x4e6e00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 28001)));
    // 0x4e6e04: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e04u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6E04 raw=0x7478742E");
    // 0x4e6e08: 0x0  nop
    ctx->pc = 0x4e6e08u;
    // NOP
    // 0x4e6e0c: 0x0  nop
    ctx->pc = 0x4e6e0cu;
    // NOP
label_4e6e10:
    // 0x4e6e10: 0x0  nop
    ctx->pc = 0x4e6e10u;
    // NOP
    // 0x4e6e14: 0x3f4ccccd  .word       0x3F4CCCCD                   # lui         $t4, 0xCCCD # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e14u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
    // 0x4e6e18: 0x3ee66666  .word       0x3EE66666                   # lui         $a2, 0x6666 # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
    // 0x4e6e1c: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e6e20: 0x0  nop
    ctx->pc = 0x4e6e20u;
    // NOP
    // 0x4e6e24: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e24u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e6e28: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e28u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e6e2c: 0x3e800000  .word       0x3E800000                   # lui         $zero, 0x0 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e6e30: 0x3f666666  .word       0x3F666666                   # lui         $a2, 0x6666 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
    // 0x4e6e34: 0x3ed9999a  .word       0x3ED9999A                   # lui         $t9, 0x999A # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e34u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x4e6e38: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e38u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e6e3c: 0x3f4ccccd  .word       0x3F4CCCCD                   # lui         $t4, 0xCCCD # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e3cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
    // 0x4e6e40: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e40u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e6e44: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e44u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e6e48:
    // 0x4e6e48: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e48u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e6e4c: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    ctx->pc = 0x4e6e50u;
}
