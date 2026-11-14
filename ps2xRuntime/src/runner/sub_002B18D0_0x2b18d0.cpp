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

// Function: sub_002B18D0
// Address: 0x2b18d0 - 0x2b19c0
void sub_002B18D0_0x2b18d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B18D0_0x2b18d0");
#endif

    switch (ctx->pc) {
        case 0x2b1950u: goto label_2b1950;
        case 0x2b199cu: goto label_2b199c;
        default: break;
    }

    ctx->pc = 0x2b18d0u;

    // 0x2b18d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b18d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b18d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b18d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b18d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b18d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b18dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b18dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b18e0: 0x8063004c  lb          $v1, 0x4C($v1)
    ctx->pc = 0x2b18e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2b18e4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2b18e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2b18e8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2b18e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2b18ec: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B18ECu;
    {
        const bool branch_taken_0x2b18ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b18ec) {
            ctx->pc = 0x2B19A8u;
            goto label_2b19a8;
        }
    }
    ctx->pc = 0x2B18F4u;
    // 0x2b18f4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b18f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b18f8: 0x90630034  lbu         $v1, 0x34($v1)
    ctx->pc = 0x2b18f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2b18fc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B18FCu;
    {
        const bool branch_taken_0x2b18fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b18fc) {
            ctx->pc = 0x2B1914u;
            goto label_2b1914;
        }
    }
    ctx->pc = 0x2B1904u;
    // 0x2b1904: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b1904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1908: 0x90630068  lbu         $v1, 0x68($v1)
    ctx->pc = 0x2b1908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x2b190c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B190Cu;
    {
        const bool branch_taken_0x2b190c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b190c) {
            ctx->pc = 0x2B19A8u;
            goto label_2b19a8;
        }
    }
    ctx->pc = 0x2B1914u;
label_2b1914:
    // 0x2b1914: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1918: 0x90420044  lbu         $v0, 0x44($v0)
    ctx->pc = 0x2b1918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2b191c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B191Cu;
    {
        const bool branch_taken_0x2b191c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b191c) {
            ctx->pc = 0x2B1958u;
            goto label_2b1958;
        }
    }
    ctx->pc = 0x2B1924u;
    // 0x2b1924: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2b1924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1928: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2b1928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b192c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b192cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1930: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1934: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2b1934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x2b1938: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x2b1938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
    // 0x2b193c: 0xc4cc0038  lwc1        $f12, 0x38($a2)
    ctx->pc = 0x2b193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1940: 0x90660034  lbu         $a2, 0x34($v1)
    ctx->pc = 0x2b1940u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2b1944: 0x8c470048  lw          $a3, 0x48($v0)
    ctx->pc = 0x2b1944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2b1948: 0xc08f558  jal         func_23D560
    ctx->pc = 0x2B1948u;
    SET_GPR_U32(ctx, 31, 0x2B1950u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x2B1948u, 0x2B1950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1950u;
label_2b1950:
    // 0x2b1950: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B1950u;
    {
        const bool branch_taken_0x2b1950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1950) {
            ctx->pc = 0x2B199Cu;
            goto label_2b199c;
        }
    }
    ctx->pc = 0x2B1958u;
label_2b1958:
    // 0x2b1958: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2b1958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b195c: 0x8fa90010  lw          $t1, 0x10($sp)
    ctx->pc = 0x2b195cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1960: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2b1960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1964: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x2b1964u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1968: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x2b1968u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b196c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b196cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1970: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1974: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2b1974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x2b1978: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x2b1978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
    // 0x2b197c: 0xc52c0038  lwc1        $f12, 0x38($t1)
    ctx->pc = 0x2b197cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b1980: 0x24c6005c  addiu       $a2, $a2, 0x5C
    ctx->pc = 0x2b1980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
    // 0x2b1984: 0xc50d003c  lwc1        $f13, 0x3C($t0)
    ctx->pc = 0x2b1984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2b1988: 0xc4ee0040  lwc1        $f14, 0x40($a3)
    ctx->pc = 0x2b1988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2b198c: 0x90670034  lbu         $a3, 0x34($v1)
    ctx->pc = 0x2b198cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2b1990: 0x8c480048  lw          $t0, 0x48($v0)
    ctx->pc = 0x2b1990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2b1994: 0xc08f6e4  jal         func_23DB90
    ctx->pc = 0x2B1994u;
    SET_GPR_U32(ctx, 31, 0x2B199Cu);
    ctx->pc = 0x23DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DB90u, 0x2B1994u, 0x2B199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B199Cu;
label_2b199c:
    // 0x2b199c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b199cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b19a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b19a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b19a4: 0xa0640068  sb          $a0, 0x68($v1)
    ctx->pc = 0x2b19a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 4));
label_2b19a8:
    // 0x2b19a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b19a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b19ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b19acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b19b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B19B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B19B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B19B8u;
    // 0x2b19b8: 0x0  nop
    ctx->pc = 0x2b19b8u;
    // NOP
    // 0x2b19bc: 0x0  nop
    ctx->pc = 0x2b19bcu;
    // NOP
    ctx->pc = 0x2b19c0u;
}
