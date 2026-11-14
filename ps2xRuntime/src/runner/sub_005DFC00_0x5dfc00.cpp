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

// Function: sub_005DFC00
// Address: 0x5dfc00 - 0x5dfc50
void sub_005DFC00_0x5dfc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DFC00_0x5dfc00");
#endif

    switch (ctx->pc) {
        case 0x5dfc28u: goto label_5dfc28;
        case 0x5dfc38u: goto label_5dfc38;
        default: break;
    }

    ctx->pc = 0x5dfc00u;

    // 0x5dfc00: 0x6f43705f  ldr         $v1, 0x705F($k0)
    ctx->pc = 0x5dfc00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 28767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x5dfc04: 0x72756f6c  .word       0x72756F6C                   # INVALID     $s3, $s5, 0x6F6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dfc04u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x5DFC04 raw=0x72756F6C");
    // 0x5dfc08: 0x4e3d2131  .word       0x4E3D2131                   # INVALID     $s1, $sp, 0x2131 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfc08u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFC08 raw=0x4E3D2131");
    // 0x5dfc0c: 0x204c4c55  addi        $t4, $v0, 0x4C55
    ctx->pc = 0x5dfc0cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19541, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x5dfc10: 0x5f202626  bgtzl       $t9, . + 4 + (0x2626 << 2)
    ctx->pc = 0x5DFC10u;
    {
        const bool branch_taken_0x5dfc10 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x5dfc10) {
            ctx->pc = 0x5DFC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFC10u;
            // 0x5dfc14: 0x6c6f4370  ldr         $t7, 0x4370($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 17264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E94ACu;
            return;
        }
    }
    ctx->pc = 0x5DFC18u;
    // 0x5dfc18: 0x3272756f  andi        $s2, $s3, 0x756F
    ctx->pc = 0x5dfc18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)30063);
    // 0x5dfc1c: 0x554e3d21  bnel        $t2, $t6, . + 4 + (0x3D21 << 2)
    ctx->pc = 0x5DFC1Cu;
    {
        const bool branch_taken_0x5dfc1c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5dfc1c) {
            ctx->pc = 0x5DFC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFC1Cu;
            // 0x5dfc20: 0x26204c4c  addiu       $zero, $s1, 0x4C4C (Delay Slot)
            // NOP (addiu $zero, ...)
            ctx->in_delay_slot = false;
            ctx->pc = 0x5EF0A4u;
            return;
        }
    }
    ctx->pc = 0x5DFC24u;
    // 0x5dfc24: 0x705f2026  .word       0x705F2026                   # INVALID     $v0, $ra, 0x2026 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dfc24u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x5DFC24 raw=0x705F2026");
label_5dfc28:
    // 0x5dfc28: 0x6f6c6f43  ldr         $t4, 0x6F43($k1)
    ctx->pc = 0x5dfc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28483); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x5dfc2c: 0x21337275  addi        $s3, $t1, 0x7275
    ctx->pc = 0x5dfc2cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)29301, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x5dfc30: 0x4c554e3d  .word       0x4C554E3D                   # INVALID     $v0, $s5, 0x4E3D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfc30u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFC30 raw=0x4C554E3D");
    // 0x5dfc34: 0x2626204c  addiu       $a2, $s1, 0x204C
    ctx->pc = 0x5dfc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8268));
label_5dfc38:
    // 0x5dfc38: 0x43705f20  .word       0x43705F20                   # INVALID     $k1, $s0, 0x5F20 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dfc38u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5DFC38 raw=0x43705F20");
    // 0x5dfc3c: 0x756f6c6f  .word       0x756F6C6F                   # INVALID     $t3, $t7, 0x6C6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfc3cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFC3C raw=0x756F6C6F");
    // 0x5dfc40: 0x3d213472  .word       0x3D213472                   # lui         $at, 0x3472 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13426 << 16));
    // 0x5dfc44: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfc44u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFC44 raw=0x4C4C554E");
    // 0x5dfc48: 0x0  nop
    ctx->pc = 0x5dfc48u;
    // NOP
    // 0x5dfc4c: 0x0  nop
    ctx->pc = 0x5dfc4cu;
    // NOP
    ctx->pc = 0x5dfc50u;
}
