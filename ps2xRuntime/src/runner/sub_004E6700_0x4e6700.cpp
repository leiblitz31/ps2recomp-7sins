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

// Function: sub_004E6700
// Address: 0x4e6700 - 0x4e6770
void sub_004E6700_0x4e6700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6700_0x4e6700");
#endif

    switch (ctx->pc) {
        case 0x4e671cu: goto label_4e671c;
        default: break;
    }

    ctx->pc = 0x4e6700u;

    // 0x4e6700: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e6700u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e6704: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e6704u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e6708: 0x756f735c  .word       0x756F735C                   # INVALID     $t3, $t7, 0x735C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6708u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6708 raw=0x756F735C");
    // 0x4e670c: 0x5c73646e  .word       0x5C73646E                   # bgtzl       $v1, . + 4 + (0x646E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E670Cu;
    {
        const bool branch_taken_0x4e670c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e670c) {
            ctx->pc = 0x4E6710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E670Cu;
            // 0x4e6710: 0x5c327370  .word       0x5C327370                   # bgtzl       $at, . + 4 + (0x7370 << 2) # 00120000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E6710 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF8C8u;
            return;
        }
    }
    ctx->pc = 0x4E6714u;
    // 0x4e6714: 0x6b6e6162  ldl         $t6, 0x6162($k1)
    ctx->pc = 0x4e6714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e6718: 0x5f676d5c  .word       0x5F676D5C                   # bgtzl       $k1, . + 4 + (0x6D5C << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e671c:
    if (ctx->pc == 0x4E671Cu) {
        ctx->pc = 0x4E671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6718u;
        // 0x4e671c: 0x746f7265  .word       0x746F7265                   # INVALID     $v1, $t7, 0x7265 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E671C raw=0x746F7265");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6720u;
        goto label_fallthrough_0x4e6718;
    }
    ctx->pc = 0x4E6718u;
    {
        const bool branch_taken_0x4e6718 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6718) {
            ctx->pc = 0x4E671Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6718u;
            // 0x4e671c: 0x746f7265  .word       0x746F7265                   # INVALID     $v1, $t7, 0x7265 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E671C raw=0x746F7265");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501C8Cu;
            return;
        }
    }
label_fallthrough_0x4e6718:
    ctx->pc = 0x4E6720u;
    // 0x4e6720: 0x722e6369  .word       0x722E6369                   # pdivuw      $s1, $t6 # 00006000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4e6720u;
    { uint32_t rs0 = GPR_U32(ctx, 17); uint32_t rt0 = GPR_U32(ctx, 14); 
   if (rt0 != 0) { ctx->lo = rs0 / rt0; ctx->hi = rs0 % rt0; } 
   else { ctx->lo = 0xFFFFFFFF; ctx->hi = rs0; } 
   SET_GPR_U32(ctx, 12, ctx->lo); }
    // 0x4e6724: 0x7377  .word       0x00007377                   # INVALID     $zero, $zero, 0x7377 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6724u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x4E6724 raw=0x00007377");
    // 0x4e6728: 0x0  nop
    ctx->pc = 0x4e6728u;
    // NOP
    // 0x4e672c: 0x0  nop
    ctx->pc = 0x4e672cu;
    // NOP
    // 0x4e6730: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e6730u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e6734: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e6734u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e6738: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e6738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e673c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E673Cu;
    {
        const bool branch_taken_0x4e673c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e673c) {
            ctx->pc = 0x4E6740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E673Cu;
            // 0x4e6740: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5018D4u;
            return;
        }
    }
    ctx->pc = 0x4E6744u;
    // 0x4e6744: 0x656d6167  daddiu      $t5, $t3, 0x6167
    ctx->pc = 0x4e6744u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
    // 0x4e6748: 0x6e705c73  ldr         $s0, 0x5C73($s3)
    ctx->pc = 0x4e6748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x4e674c: 0x72655f6c  .word       0x72655F6C                   # INVALID     $s3, $a1, 0x5F6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e674cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E674C raw=0x72655F6C");
    // 0x4e6750: 0x6369746f  daddi       $t1, $k1, 0x746F
    ctx->pc = 0x4e6750u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29807; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x4e6754: 0x61657264  daddi       $a1, $t3, 0x7264
    ctx->pc = 0x4e6754u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29284; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e6758: 0x78742e6d  lq          $s4, 0x2E6D($v1)
    ctx->pc = 0x4e6758u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 3), 11885)));
    // 0x4e675c: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e675cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e6760: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6760u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e6764: 0x0  nop
    ctx->pc = 0x4e6764u;
    // NOP
    // 0x4e6768: 0x0  nop
    ctx->pc = 0x4e6768u;
    // NOP
    // 0x4e676c: 0x0  nop
    ctx->pc = 0x4e676cu;
    // NOP
    ctx->pc = 0x4e6770u;
}
