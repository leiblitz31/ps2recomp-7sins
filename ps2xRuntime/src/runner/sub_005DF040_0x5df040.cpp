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

// Function: sub_005DF040
// Address: 0x5df040 - 0x5df240
void sub_005DF040_0x5df040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF040_0x5df040");
#endif

    switch (ctx->pc) {
        case 0x5df040u: goto label_5df040;
        case 0x5df044u: goto label_5df044;
        case 0x5df048u: goto label_5df048;
        case 0x5df04cu: goto label_5df04c;
        case 0x5df050u: goto label_5df050;
        case 0x5df054u: goto label_5df054;
        case 0x5df058u: goto label_5df058;
        case 0x5df05cu: goto label_5df05c;
        case 0x5df060u: goto label_5df060;
        case 0x5df064u: goto label_5df064;
        case 0x5df068u: goto label_5df068;
        case 0x5df06cu: goto label_5df06c;
        case 0x5df070u: goto label_5df070;
        case 0x5df074u: goto label_5df074;
        case 0x5df078u: goto label_5df078;
        case 0x5df07cu: goto label_5df07c;
        case 0x5df080u: goto label_5df080;
        case 0x5df084u: goto label_5df084;
        case 0x5df088u: goto label_5df088;
        case 0x5df08cu: goto label_5df08c;
        case 0x5df090u: goto label_5df090;
        case 0x5df094u: goto label_5df094;
        case 0x5df098u: goto label_5df098;
        case 0x5df09cu: goto label_5df09c;
        case 0x5df0a0u: goto label_5df0a0;
        case 0x5df0a4u: goto label_5df0a4;
        case 0x5df0a8u: goto label_5df0a8;
        case 0x5df0acu: goto label_5df0ac;
        case 0x5df0b0u: goto label_5df0b0;
        case 0x5df0b4u: goto label_5df0b4;
        case 0x5df0b8u: goto label_5df0b8;
        case 0x5df0bcu: goto label_5df0bc;
        case 0x5df0c0u: goto label_5df0c0;
        case 0x5df0c4u: goto label_5df0c4;
        case 0x5df0c8u: goto label_5df0c8;
        case 0x5df0ccu: goto label_5df0cc;
        case 0x5df0d0u: goto label_5df0d0;
        case 0x5df0d4u: goto label_5df0d4;
        case 0x5df0d8u: goto label_5df0d8;
        case 0x5df0dcu: goto label_5df0dc;
        case 0x5df0e0u: goto label_5df0e0;
        case 0x5df0e4u: goto label_5df0e4;
        case 0x5df0e8u: goto label_5df0e8;
        case 0x5df0ecu: goto label_5df0ec;
        case 0x5df0f0u: goto label_5df0f0;
        case 0x5df0f4u: goto label_5df0f4;
        case 0x5df0f8u: goto label_5df0f8;
        case 0x5df0fcu: goto label_5df0fc;
        case 0x5df100u: goto label_5df100;
        case 0x5df104u: goto label_5df104;
        case 0x5df108u: goto label_5df108;
        case 0x5df10cu: goto label_5df10c;
        case 0x5df110u: goto label_5df110;
        case 0x5df114u: goto label_5df114;
        case 0x5df118u: goto label_5df118;
        case 0x5df11cu: goto label_5df11c;
        case 0x5df120u: goto label_5df120;
        case 0x5df124u: goto label_5df124;
        case 0x5df128u: goto label_5df128;
        case 0x5df12cu: goto label_5df12c;
        case 0x5df130u: goto label_5df130;
        case 0x5df134u: goto label_5df134;
        case 0x5df138u: goto label_5df138;
        case 0x5df13cu: goto label_5df13c;
        case 0x5df140u: goto label_5df140;
        case 0x5df144u: goto label_5df144;
        case 0x5df148u: goto label_5df148;
        case 0x5df14cu: goto label_5df14c;
        case 0x5df150u: goto label_5df150;
        case 0x5df154u: goto label_5df154;
        case 0x5df158u: goto label_5df158;
        case 0x5df15cu: goto label_5df15c;
        case 0x5df160u: goto label_5df160;
        case 0x5df164u: goto label_5df164;
        case 0x5df168u: goto label_5df168;
        case 0x5df16cu: goto label_5df16c;
        case 0x5df170u: goto label_5df170;
        case 0x5df174u: goto label_5df174;
        case 0x5df178u: goto label_5df178;
        case 0x5df17cu: goto label_5df17c;
        case 0x5df180u: goto label_5df180;
        case 0x5df184u: goto label_5df184;
        case 0x5df188u: goto label_5df188;
        case 0x5df18cu: goto label_5df18c;
        case 0x5df190u: goto label_5df190;
        case 0x5df194u: goto label_5df194;
        case 0x5df198u: goto label_5df198;
        case 0x5df19cu: goto label_5df19c;
        case 0x5df1a0u: goto label_5df1a0;
        case 0x5df1a4u: goto label_5df1a4;
        case 0x5df1a8u: goto label_5df1a8;
        case 0x5df1acu: goto label_5df1ac;
        case 0x5df1b0u: goto label_5df1b0;
        case 0x5df1b4u: goto label_5df1b4;
        case 0x5df1b8u: goto label_5df1b8;
        case 0x5df1bcu: goto label_5df1bc;
        case 0x5df1c0u: goto label_5df1c0;
        case 0x5df1c4u: goto label_5df1c4;
        case 0x5df1c8u: goto label_5df1c8;
        case 0x5df1ccu: goto label_5df1cc;
        case 0x5df1d0u: goto label_5df1d0;
        case 0x5df1d4u: goto label_5df1d4;
        case 0x5df1d8u: goto label_5df1d8;
        case 0x5df1dcu: goto label_5df1dc;
        case 0x5df1e0u: goto label_5df1e0;
        case 0x5df1e4u: goto label_5df1e4;
        case 0x5df1e8u: goto label_5df1e8;
        case 0x5df1ecu: goto label_5df1ec;
        case 0x5df1f0u: goto label_5df1f0;
        case 0x5df1f4u: goto label_5df1f4;
        case 0x5df1f8u: goto label_5df1f8;
        case 0x5df1fcu: goto label_5df1fc;
        case 0x5df200u: goto label_5df200;
        case 0x5df204u: goto label_5df204;
        case 0x5df208u: goto label_5df208;
        case 0x5df20cu: goto label_5df20c;
        case 0x5df210u: goto label_5df210;
        case 0x5df214u: goto label_5df214;
        case 0x5df218u: goto label_5df218;
        case 0x5df21cu: goto label_5df21c;
        case 0x5df220u: goto label_5df220;
        case 0x5df224u: goto label_5df224;
        case 0x5df228u: goto label_5df228;
        case 0x5df22cu: goto label_5df22c;
        case 0x5df230u: goto label_5df230;
        case 0x5df234u: goto label_5df234;
        case 0x5df238u: goto label_5df238;
        case 0x5df23cu: goto label_5df23c;
        default: break;
    }

    ctx->pc = 0x5df040u;

label_5df040:
    // 0x5df040: 0x5f544547  .word       0x5F544547                   # bgtzl       $k0, . + 4 + (0x4547 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_5df044:
    if (ctx->pc == 0x5DF044u) {
        ctx->pc = 0x5DF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DF040u;
        // 0x5df044: 0x47494c41  .word       0x47494C41                   # INVALID     $k0, $t1, 0x4C41 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x1 at 0x5DF044 raw=0x47494C41");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DF048u;
        goto label_5df048;
    }
    ctx->pc = 0x5DF040u;
    {
        const bool branch_taken_0x5df040 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5df040) {
            ctx->pc = 0x5DF044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF040u;
            // 0x5df044: 0x47494c41  .word       0x47494C41                   # INVALID     $k0, $t1, 0x4C41 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x1 at 0x5DF044 raw=0x47494C41");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F0560u;
            return;
        }
    }
    ctx->pc = 0x5DF048u;
label_5df048:
    // 0x5df048: 0x4e454d4e  .word       0x4E454D4E                   # INVALID     $s2, $a1, 0x4D4E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df048u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF048 raw=0x4E454D4E");
label_5df04c:
    // 0x5df04c: 0x665f2854  daddiu      $ra, $s2, 0x2854
    ctx->pc = 0x5df04cu;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)10324);
label_5df050:
    // 0x5df050: 0x4c656c69  .word       0x4C656C69                   # INVALID     $v1, $a1, 0x6C69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df050u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF050 raw=0x4C656C69");
label_5df054:
    // 0x5df054: 0x54747369  bnel        $v1, $s4, . + 4 + (0x7369 << 2)
label_5df058:
    if (ctx->pc == 0x5DF058u) {
        ctx->pc = 0x5DF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DF054u;
        // 0x5df058: 0x656c6261  daddiu      $t4, $t3, 0x6261 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25185);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DF05Cu;
        goto label_5df05c;
    }
    ctx->pc = 0x5DF054u;
    {
        const bool branch_taken_0x5df054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x5df054) {
            ctx->pc = 0x5DF058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF054u;
            // 0x5df058: 0x656c6261  daddiu      $t4, $t3, 0x6261 (Delay Slot)
            SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25185);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FBDFCu;
            return;
        }
    }
    ctx->pc = 0x5DF05Cu;
label_5df05c:
    // 0x5df05c: 0x3d3e2029  .word       0x3D3E2029                   # lui         $fp, 0x2029 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df05cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8233 << 16));
label_5df060:
    // 0x5df060: 0x343620  .word       0x00343620                   # add         $a2, $at, $s4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df060u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_5df064:
    // 0x5df064: 0x0  nop
    ctx->pc = 0x5df064u;
    // NOP
label_5df068:
    // 0x5df068: 0x0  nop
    ctx->pc = 0x5df068u;
    // NOP
label_5df06c:
    // 0x5df06c: 0x0  nop
    ctx->pc = 0x5df06cu;
    // NOP
label_5df070:
    // 0x5df070: 0x6c69665f  ldr         $t1, 0x665F($v1)
    ctx->pc = 0x5df070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5df074:
    // 0x5df074: 0x73694c65  .word       0x73694C65                   # INVALID     $k1, $t1, 0x4C65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df074u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DF074 raw=0x73694C65");
label_5df078:
    // 0x5df078: 0x62615474  daddi       $at, $s3, 0x5474
    ctx->pc = 0x5df078u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)21620; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_5df07c:
    // 0x5df07c: 0x6e20656c  ldr         $zero, 0x656C($s1)
    ctx->pc = 0x5df07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5df080:
    // 0x5df080: 0x3620746f  ori         $zero, $s1, 0x746F
    ctx->pc = 0x5df080u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)29807);
label_5df084:
    // 0x5df084: 0x79622034  lq          $v0, 0x2034($t3)
    ctx->pc = 0x5df084u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 8244)));
label_5df088:
    // 0x5df088: 0x61206574  daddi       $zero, $t1, 0x6574
    ctx->pc = 0x5df088u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25972; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5df08c:
    // 0x5df08c: 0x6e67696c  ldr         $a3, 0x696C($s3)
    ctx->pc = 0x5df08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_5df090:
    // 0x5df090: 0x6465  .word       0x00006465                   # move        $t4, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df090u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5df094:
    // 0x5df094: 0x0  nop
    ctx->pc = 0x5df094u;
    // NOP
label_5df098:
    // 0x5df098: 0x0  nop
    ctx->pc = 0x5df098u;
    // NOP
label_5df09c:
    // 0x5df09c: 0x0  nop
    ctx->pc = 0x5df09cu;
    // NOP
label_5df0a0:
    // 0x5df0a0: 0x6e75665f  ldr         $s5, 0x665F($s3)
    ctx->pc = 0x5df0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5df0a4:
    // 0x5df0a4: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x5df0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5df0a8:
    // 0x5df0a8: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df0a8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DF0A8 raw=0x7261506E");
label_5df0ac:
    // 0x5df0ac: 0x5f2e736d  .word       0x5F2E736D                   # bgtzl       $t9, . + 4 + (0x736D << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_5df0b0:
    if (ctx->pc == 0x5DF0B0u) {
        ctx->pc = 0x5DF0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DF0ACu;
        // 0x5df0b0: 0x726f5075  .word       0x726F5075                   # INVALID     $s3, $t7, 0x5075 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x5DF0B0 raw=0x726F5075");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DF0B4u;
        goto label_5df0b4;
    }
    ctx->pc = 0x5DF0ACu;
    {
        const bool branch_taken_0x5df0ac = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x5df0ac) {
            ctx->pc = 0x5DF0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF0ACu;
            // 0x5df0b0: 0x726f5075  .word       0x726F5075                   # INVALID     $s3, $t7, 0x5075 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x5DF0B0 raw=0x726F5075");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FBE64u;
            return;
        }
    }
    ctx->pc = 0x5DF0B4u;
label_5df0b4:
    // 0x5df0b4: 0x206f4e74  addi        $t7, $v1, 0x4E74
    ctx->pc = 0x5df0b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)20084, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_5df0b8:
    // 0x5df0b8: 0x49203d21  .word       0x49203D21                   # INVALID     $t1, $zero, 0x3D21 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5df0b8u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5DF0B8 raw=0x49203D21");
label_5df0bc:
    // 0x5df0bc: 0x4c41564e  .word       0x4C41564E                   # INVALID     $v0, $at, 0x564E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df0bcu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF0BC raw=0x4C41564E");
label_5df0c0:
    // 0x5df0c0: 0x4449  .word       0x00004449                   # jalr        $t0, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_5df0c4:
    if (ctx->pc == 0x5DF0C4u) {
        ctx->pc = 0x5DF0C8u;
        goto label_5df0c8;
    }
    ctx->pc = 0x5DF0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 8, 0x5DF0C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5DF0C0u, 0x5DF0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x5DF0C8u;
label_5df0c8:
    // 0x5df0c8: 0x0  nop
    ctx->pc = 0x5df0c8u;
    // NOP
label_5df0cc:
    // 0x5df0cc: 0x0  nop
    ctx->pc = 0x5df0ccu;
    // NOP
label_5df0d0:
    // 0x5df0d0: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5df0d0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_5df0d4:
    // 0x5df0d4: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5df0d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5df0d8:
    // 0x5df0d8: 0x74726f70  .word       0x74726F70                   # INVALID     $v1, $s2, 0x6F70 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df0d8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF0D8 raw=0x74726F70");
label_5df0dc:
    // 0x5df0dc: 0x6f6e20  .word       0x006F6E20                   # add         $t5, $v1, $t7 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df0dcu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_5df0e0:
    // 0x5df0e0: 0x6e75665f  ldr         $s5, 0x665F($s3)
    ctx->pc = 0x5df0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5df0e4:
    // 0x5df0e4: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x5df0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5df0e8:
    // 0x5df0e8: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df0e8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DF0E8 raw=0x7261506E");
label_5df0ec:
    // 0x5df0ec: 0x5f2e736d  .word       0x5F2E736D                   # bgtzl       $t9, . + 4 + (0x736D << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_5df0f0:
    if (ctx->pc == 0x5DF0F0u) {
        ctx->pc = 0x5DF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DF0ECu;
        // 0x5df0f0: 0x6f6c5375  ldr         $t4, 0x5375($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21365); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DF0F4u;
        goto label_5df0f4;
    }
    ctx->pc = 0x5DF0ECu;
    {
        const bool branch_taken_0x5df0ec = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x5df0ec) {
            ctx->pc = 0x5DF0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF0ECu;
            // 0x5df0f0: 0x6f6c5375  ldr         $t4, 0x5375($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21365); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FBEA4u;
            return;
        }
    }
    ctx->pc = 0x5DF0F4u;
label_5df0f4:
    // 0x5df0f4: 0x206f4e74  addi        $t7, $v1, 0x4E74
    ctx->pc = 0x5df0f4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)20084, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_5df0f8:
    // 0x5df0f8: 0x49203d21  .word       0x49203D21                   # INVALID     $t1, $zero, 0x3D21 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5df0f8u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5DF0F8 raw=0x49203D21");
label_5df0fc:
    // 0x5df0fc: 0x4c41564e  .word       0x4C41564E                   # INVALID     $v0, $at, 0x564E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df0fcu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF0FC raw=0x4C41564E");
label_5df100:
    // 0x5df100: 0x4449  .word       0x00004449                   # jalr        $t0, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_5df104:
    if (ctx->pc == 0x5DF104u) {
        ctx->pc = 0x5DF108u;
        goto label_5df108;
    }
    ctx->pc = 0x5DF100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 8, 0x5DF108u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5DF100u, 0x5DF108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x5DF108u;
label_5df108:
    // 0x5df108: 0x0  nop
    ctx->pc = 0x5df108u;
    // NOP
label_5df10c:
    // 0x5df10c: 0x0  nop
    ctx->pc = 0x5df10cu;
    // NOP
label_5df110:
    // 0x5df110: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5df110u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_5df114:
    // 0x5df114: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5df114u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5df118:
    // 0x5df118: 0x746f6c73  .word       0x746F6C73                   # INVALID     $v1, $t7, 0x6C73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df118u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF118 raw=0x746F6C73");
label_5df11c:
    // 0x5df11c: 0x6f6e20  .word       0x006F6E20                   # add         $t5, $v1, $t7 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df11cu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_5df120:
    // 0x5df120: 0x6e75665f  ldr         $s5, 0x665F($s3)
    ctx->pc = 0x5df120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5df124:
    // 0x5df124: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x5df124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5df128:
    // 0x5df128: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df128u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DF128 raw=0x7261506E");
label_5df12c:
    // 0x5df12c: 0x702e736d  .word       0x702E736D                   # INVALID     $at, $t6, 0x736D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df12cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x5DF12C raw=0x702E736D");
label_5df130:
    // 0x5df130: 0x466d754e  .word       0x466D754E                   # INVALID     $s3, $t5, 0x754E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df130u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0xE at 0x5DF130 raw=0x466D754E");
label_5df134:
    // 0x5df134: 0x73656c69  .word       0x73656C69                   # INVALID     $k1, $a1, 0x6C69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x5df134u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x11 at 0x5DF134 raw=0x73656C69");
label_5df138:
    // 0x5df138: 0x0  nop
    ctx->pc = 0x5df138u;
    // NOP
label_5df13c:
    // 0x5df13c: 0x0  nop
    ctx->pc = 0x5df13cu;
    // NOP
label_5df140:
    // 0x5df140: 0x2573252f  addiu       $s3, $t3, 0x252F
    ctx->pc = 0x5df140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), 9519));
label_5df144:
    // 0x5df144: 0x2f732573  sltiu       $s3, $k1, 0x2573
    ctx->pc = 0x5df144u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)9587) ? 1 : 0);
label_5df148:
    // 0x5df148: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x5df148u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_5df14c:
    // 0x5df14c: 0x0  nop
    ctx->pc = 0x5df14cu;
    // NOP
label_5df150:
    // 0x5df150: 0x636e7566  daddi       $t6, $k1, 0x7566
    ctx->pc = 0x5df150u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30054; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5df154:
    // 0x5df154: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5df154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5df158:
    // 0x5df158: 0x3d206f4e  .word       0x3D206F4E                   # lui         $zero, 0x6F4E # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df158u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)28494 << 16));
label_5df15c:
    // 0x5df15c: 0x6373203d  daddi       $s3, $k1, 0x203D
    ctx->pc = 0x5df15cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8253; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5df160:
    // 0x5df160: 0x46634d65  .word       0x46634D65                   # INVALID     $s3, $v1, 0x4D65 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df160u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x25 at 0x5DF160 raw=0x46634D65");
label_5df164:
    // 0x5df164: 0x4e636e75  .word       0x4E636E75                   # INVALID     $s3, $v1, 0x6E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df164u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF164 raw=0x4E636E75");
label_5df168:
    // 0x5df168: 0x7465476f  .word       0x7465476F                   # INVALID     $v1, $a1, 0x476F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df168u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF168 raw=0x7465476F");
label_5df16c:
    // 0x5df16c: 0x726944  .word       0x00726944                   # sllv        $t5, $s2, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df16cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
label_5df170:
    // 0x5df170: 0x75665f2a  .word       0x75665F2A                   # INVALID     $t3, $a2, 0x5F2A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df170u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF170 raw=0x75665F2A");
label_5df174:
    // 0x5df174: 0x6974636e  ldl         $s4, 0x636E($t3)
    ctx->pc = 0x5df174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25454); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5df178:
    // 0x5df178: 0x61506e6f  daddi       $s0, $t2, 0x6E6F
    ctx->pc = 0x5df178u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)28271; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_5df17c:
    // 0x5df17c: 0x2e736d72  sltiu       $s3, $s3, 0x6D72
    ctx->pc = 0x5df17cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28018) ? 1 : 0);
label_5df180:
    // 0x5df180: 0x6d754e70  ldr         $s5, 0x4E70($t3)
    ctx->pc = 0x5df180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 20080); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5df184:
    // 0x5df184: 0x656c6946  daddiu      $t4, $t3, 0x6946
    ctx->pc = 0x5df184u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26950);
label_5df188:
    // 0x5df188: 0x3d3e2073  .word       0x3D3E2073                   # lui         $fp, 0x2073 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df188u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8307 << 16));
label_5df18c:
    // 0x5df18c: 0x3220  .word       0x00003220                   # add         $a2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df18cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_5df190:
    // 0x5df190: 0x72726f43  .word       0x72726F43                   # INVALID     $s3, $s2, 0x6F43 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df190u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 18); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5df194:
    // 0x5df194: 0x20747075  addi        $s4, $v1, 0x7075
    ctx->pc = 0x5df194u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28789, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5df198:
    // 0x5df198: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x5df198u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_5df19c:
    // 0x5df19c: 0x746e6520  .word       0x746E6520                   # INVALID     $v1, $t6, 0x6520 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df19cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF19C raw=0x746E6520");
label_5df1a0:
    // 0x5df1a0: 0x73656972  .word       0x73656972                   # INVALID     $k1, $a1, 0x6972 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df1a0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5DF1A0 raw=0x73656972");
label_5df1a4:
    // 0x5df1a4: 0x0  nop
    ctx->pc = 0x5df1a4u;
    // NOP
label_5df1a8:
    // 0x5df1a8: 0x0  nop
    ctx->pc = 0x5df1a8u;
    // NOP
label_5df1ac:
    // 0x5df1ac: 0x0  nop
    ctx->pc = 0x5df1acu;
    // NOP
label_5df1b0:
    // 0x5df1b0: 0x636e7566  daddi       $t6, $k1, 0x7566
    ctx->pc = 0x5df1b0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30054; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5df1b4:
    // 0x5df1b4: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5df1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5df1b8:
    // 0x5df1b8: 0x3d206f4e  .word       0x3D206F4E                   # lui         $zero, 0x6F4E # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df1b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)28494 << 16));
label_5df1bc:
    // 0x5df1bc: 0x6373203d  daddi       $s3, $k1, 0x203D
    ctx->pc = 0x5df1bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8253; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5df1c0:
    // 0x5df1c0: 0x46634d65  .word       0x46634D65                   # INVALID     $s3, $v1, 0x4D65 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df1c0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x25 at 0x5DF1C0 raw=0x46634D65");
label_5df1c4:
    // 0x5df1c4: 0x4e636e75  .word       0x4E636E75                   # INVALID     $s3, $v1, 0x6E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df1c4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF1C4 raw=0x4E636E75");
label_5df1c8:
    // 0x5df1c8: 0x646b4d6f  daddiu      $t3, $v1, 0x4D6F
    ctx->pc = 0x5df1c8u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)19823);
label_5df1cc:
    // 0x5df1cc: 0x7269  .word       0x00007269                   # mtsa        $zero # 00007240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5df1ccu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_5df1d0:
    // 0x5df1d0: 0x6e75665f  ldr         $s5, 0x665F($s3)
    ctx->pc = 0x5df1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5df1d4:
    // 0x5df1d4: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x5df1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5df1d8:
    // 0x5df1d8: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df1d8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DF1D8 raw=0x7261506E");
label_5df1dc:
    // 0x5df1dc: 0x702e736d  .word       0x702E736D                   # INVALID     $at, $t6, 0x736D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df1dcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x5DF1DC raw=0x702E736D");
label_5df1e0:
    // 0x5df1e0: 0x46726944  .word       0x46726944                   # INVALID     $s3, $s2, 0x6944 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df1e0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x4 at 0x5DF1E0 raw=0x46726944");
label_5df1e4:
    // 0x5df1e4: 0x646e756f  daddiu      $t6, $v1, 0x756F
    ctx->pc = 0x5df1e4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30063);
label_5df1e8:
    // 0x5df1e8: 0x0  nop
    ctx->pc = 0x5df1e8u;
    // NOP
label_5df1ec:
    // 0x5df1ec: 0x0  nop
    ctx->pc = 0x5df1ecu;
    // NOP
label_5df1f0:
    // 0x5df1f0: 0x6f6d654d  ldr         $t5, 0x654D($k1)
    ctx->pc = 0x5df1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_5df1f4:
    // 0x5df1f4: 0x43207972  .word       0x43207972                   # INVALID     $t9, $zero, 0x7972 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5df1f4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x5DF1F4 raw=0x43207972");
label_5df1f8:
    // 0x5df1f8: 0x20647261  addi        $a0, $v1, 0x7261
    ctx->pc = 0x5df1f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5df1fc:
    // 0x5df1fc: 0x646e6946  daddiu      $t6, $v1, 0x6946
    ctx->pc = 0x5df1fcu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26950);
label_5df200:
    // 0x5df200: 0x656c6946  daddiu      $t4, $t3, 0x6946
    ctx->pc = 0x5df200u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26950);
label_5df204:
    // 0x5df204: 0xa3a  dsrl        $at, $zero, 8
    ctx->pc = 0x5df204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> 8);
label_5df208:
    // 0x5df208: 0x0  nop
    ctx->pc = 0x5df208u;
    // NOP
label_5df20c:
    // 0x5df20c: 0x0  nop
    ctx->pc = 0x5df20cu;
    // NOP
label_5df210:
    // 0x5df210: 0x20726944  addi        $s2, $v1, 0x6944
    ctx->pc = 0x5df210u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26948, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_5df214:
    // 0x5df214: 0x63207325  daddi       $zero, $t9, 0x7325
    ctx->pc = 0x5df214u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29477; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5df218:
    // 0x5df218: 0x61746e6f  daddi       $s4, $t3, 0x6E6F
    ctx->pc = 0x5df218u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28271; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_5df21c:
    // 0x5df21c: 0x20736e69  addi        $s3, $v1, 0x6E69
    ctx->pc = 0x5df21cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5df220:
    // 0x5df220: 0x66206425  daddiu      $zero, $s1, 0x6425
    ctx->pc = 0x5df220u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)25637);
label_5df224:
    // 0x5df224: 0x73656c69  .word       0x73656C69                   # INVALID     $k1, $a1, 0x6C69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x5df224u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x11 at 0x5DF224 raw=0x73656C69");
label_5df228:
    // 0x5df228: 0x696c203b  ldl         $t4, 0x203B($t3)
    ctx->pc = 0x5df228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8251); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_5df22c:
    // 0x5df22c: 0x2074696d  addi        $s4, $v1, 0x696D
    ctx->pc = 0x5df22cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26989, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5df230:
    // 0x5df230: 0x25207369  addiu       $zero, $t1, 0x7369
    ctx->pc = 0x5df230u;
    // NOP (addiu $zero, ...)
label_5df234:
    // 0x5df234: 0x69662064  ldl         $a2, 0x2064($t3)
    ctx->pc = 0x5df234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_5df238:
    // 0x5df238: 0xa73656c  j           func_9CD95B0
label_5df23c:
    if (ctx->pc == 0x5DF23Cu) {
        ctx->pc = 0x5DF240u;
        goto label_fallthrough_0x5df238;
    }
    ctx->pc = 0x5DF238u;
    ctx->pc = 0x9CD95B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9CD95B0u, 0x5DF238u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x5df238:
    ctx->pc = 0x5DF240u;
}
