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

// Function: sub_00167480
// Address: 0x167480 - 0x1676c0
void sub_00167480_0x167480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167480_0x167480");
#endif

    switch (ctx->pc) {
        case 0x16756cu: goto label_16756c;
        case 0x1675b8u: goto label_1675b8;
        case 0x1675e0u: goto label_1675e0;
        case 0x167604u: goto label_167604;
        case 0x167648u: goto label_167648;
        case 0x167678u: goto label_167678;
        case 0x1676a4u: goto label_1676a4;
        default: break;
    }

    ctx->pc = 0x167480u;

    // 0x167480: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x167480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x167484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x167488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16748c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16748cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167490: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x167490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x167494: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x167494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x167498: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x167498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x16749c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x16749cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1674a0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1674a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1674a4: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x1674A4u;
    {
        const bool branch_taken_0x1674a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1674a4) {
            ctx->pc = 0x1676A4u;
            goto label_1676a4;
        }
    }
    ctx->pc = 0x1674ACu;
    // 0x1674ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1674acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1674b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1674b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1674b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1674b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1674b8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1674b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1674bc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1674bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1674c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1674c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1674c4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1674c4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1674c8: 0x1812  mflo        $v1
    ctx->pc = 0x1674c8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1674cc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1674ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1674d0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1674d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1674d4: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1674D4u;
    {
        const bool branch_taken_0x1674d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1674d4) {
            ctx->pc = 0x167680u;
            goto label_167680;
        }
    }
    ctx->pc = 0x1674DCu;
    // 0x1674dc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1674dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1674e0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1674e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1674e4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1674e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1674e8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1674e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1674ec: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1674ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1674f0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1674f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1674f4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1674f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1674f8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1674f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1674fc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1674fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167500: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x167500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x167504: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x167504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167508: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x167508u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16750c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x16750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x167510: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x167510u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x167514: 0x8812  mflo        $s1
    ctx->pc = 0x167514u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x167518: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x167518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16751c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x16751cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x167520: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x167520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x167524: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x167524u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x167528: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x167528u;
    {
        const bool branch_taken_0x167528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x167528) {
            ctx->pc = 0x1675E8u;
            goto label_1675e8;
        }
    }
    ctx->pc = 0x167530u;
    // 0x167530: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x167530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167534: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x167534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x167538: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x167538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16753c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x16753cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x167540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167544: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167548: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x167548u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16754c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x16754cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167550: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x167550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167554: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x167554u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x167558: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x167558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16755c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x16755cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x167560: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x167560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x167564: 0xc059ecc  jal         func_167B30
    ctx->pc = 0x167564u;
    SET_GPR_U32(ctx, 31, 0x16756Cu);
    ctx->pc = 0x167B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B30u, 0x167564u, 0x16756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16756Cu;
label_16756c:
    // 0x16756c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x16756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167570: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x167570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x167574: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x167574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x167578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16757c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16757cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167580: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x167580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x167584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167588: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x167588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x16758c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x16758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x167590: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x167590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x167594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167598: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16759c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x16759cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1675a0: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1675a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1675a4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1675a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1675a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1675a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675ac: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1675acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1675b0: 0xc059e9c  jal         func_167A70
    ctx->pc = 0x1675B0u;
    SET_GPR_U32(ctx, 31, 0x1675B8u);
    ctx->pc = 0x167A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167A70u, 0x1675B0u, 0x1675B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675B8u;
label_1675b8:
    // 0x1675b8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1675b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1675bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1675bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1675c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1675c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1675c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1675c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1675c8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1675c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1675cc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1675ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1675d0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1675d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1675d4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1675d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1675d8: 0xc059e84  jal         func_167A10
    ctx->pc = 0x1675D8u;
    SET_GPR_U32(ctx, 31, 0x1675E0u);
    ctx->pc = 0x167A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167A10u, 0x1675D8u, 0x1675E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1675E0u;
label_1675e0:
    // 0x1675e0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1675E0u;
    {
        const bool branch_taken_0x1675e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1675e0) {
            ctx->pc = 0x1676A4u;
            goto label_1676a4;
        }
    }
    ctx->pc = 0x1675E8u;
label_1675e8:
    // 0x1675e8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1675e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1675ec: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1675ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1675f0: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1675f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1675f4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1675f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1675f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1675f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1675fc: 0xc059e74  jal         func_1679D0
    ctx->pc = 0x1675FCu;
    SET_GPR_U32(ctx, 31, 0x167604u);
    ctx->pc = 0x1679D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1679D0u, 0x1675FCu, 0x167604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167604u;
label_167604:
    // 0x167604: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x167604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x167608: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x167608u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16760c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x16760cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x167610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167614: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x167614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167618: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x167618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16761c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x16761cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x167620: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x167620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x167624: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x167624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x167628: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x167628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16762c: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x16762cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x167630: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x167630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x167634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167638: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x167638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16763c: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x16763cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x167640: 0xc059ecc  jal         func_167B30
    ctx->pc = 0x167640u;
    SET_GPR_U32(ctx, 31, 0x167648u);
    ctx->pc = 0x167B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B30u, 0x167640u, 0x167648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167648u;
label_167648:
    // 0x167648: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x167648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16764c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x16764cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x167650: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x167650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x167654: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x167654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167658: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x167658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16765c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16765cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167660: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x167660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x167664: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x167664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167668: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x167668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16766c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16766cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x167670: 0xc059e84  jal         func_167A10
    ctx->pc = 0x167670u;
    SET_GPR_U32(ctx, 31, 0x167678u);
    ctx->pc = 0x167A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167A10u, 0x167670u, 0x167678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167678u;
label_167678:
    // 0x167678: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x167678u;
    {
        const bool branch_taken_0x167678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167678) {
            ctx->pc = 0x1676A4u;
            goto label_1676a4;
        }
    }
    ctx->pc = 0x167680u;
label_167680:
    // 0x167680: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x167680u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x167684: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x167684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167688: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x167688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16768c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x16768cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x167690: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x167690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x167694: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x167694u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x167698: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16769c: 0xc059db0  jal         func_1676C0
    ctx->pc = 0x16769Cu;
    SET_GPR_U32(ctx, 31, 0x1676A4u);
    ctx->pc = 0x1676C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1676C0u, 0x16769Cu, 0x1676A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1676A4u;
label_1676a4:
    // 0x1676a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1676a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1676a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1676a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1676ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1676acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1676b0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1676b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1676b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1676B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1676B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1676BCu;
    // 0x1676bc: 0x0  nop
    ctx->pc = 0x1676bcu;
    // NOP
    ctx->pc = 0x1676c0u;
}
