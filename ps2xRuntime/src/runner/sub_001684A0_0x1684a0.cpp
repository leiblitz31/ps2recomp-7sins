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

// Function: sub_001684A0
// Address: 0x1684a0 - 0x168630
void sub_001684A0_0x1684a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001684A0_0x1684a0");
#endif

    switch (ctx->pc) {
        case 0x1684dcu: goto label_1684dc;
        case 0x16851cu: goto label_16851c;
        case 0x168568u: goto label_168568;
        case 0x1685ccu: goto label_1685cc;
        case 0x168614u: goto label_168614;
        default: break;
    }

    ctx->pc = 0x1684a0u;

    // 0x1684a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1684a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1684a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1684a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1684a8: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1684a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1684ac: 0xc78080ac  lwc1        $f0, -0x7F54($gp)
    ctx->pc = 0x1684acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1684b0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1684b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1684b4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1684b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1684b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1684b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1684bc: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1684bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1684c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1684c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1684c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1684c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1684c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1684c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1684cc: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x1684ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1684d0: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1684d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1684d4: 0xc08c910  jal         func_232440
    ctx->pc = 0x1684D4u;
    SET_GPR_U32(ctx, 31, 0x1684DCu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x1684D4u, 0x1684DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684DCu;
label_1684dc:
    // 0x1684dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1684dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1684e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1684e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1684e4: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1684e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1684e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1684e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1684ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1684ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1684f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1684f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1684f4: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x1684f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1684f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1684f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1684fc: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1684fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x168500: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x168500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168504: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x168504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x168508: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x168508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16850c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16850cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168510: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x168510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168514: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x168514u;
    SET_GPR_U32(ctx, 31, 0x16851Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x168514u, 0x16851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16851Cu;
label_16851c:
    // 0x16851c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x16851cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168520: 0xdf828eb0  ld          $v0, -0x7150($gp)
    ctx->pc = 0x168520u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x168524: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x168524u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x168528: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x168528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16852c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x16852cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168530: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x168530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x168534: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x168534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x168538: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x168538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16853c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168540: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x168540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x168544: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x168544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x168548: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x168548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16854c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16854cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168550: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x168550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168554: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x168554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x168558: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x168558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16855c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16855cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168560: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x168560u;
    SET_GPR_U32(ctx, 31, 0x168568u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x168560u, 0x168568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168568u;
label_168568:
    // 0x168568: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x168568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16856c: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x16856cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x168570: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x168570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168574: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x168574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x168578: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x168578u;
    {
        const bool branch_taken_0x168578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x168578) {
            ctx->pc = 0x168614u;
            goto label_168614;
        }
    }
    ctx->pc = 0x168580u;
    // 0x168580: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x168580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x168584: 0xdf828eb8  ld          $v0, -0x7148($gp)
    ctx->pc = 0x168584u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938296)));
    // 0x168588: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x168588u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x16858c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x16858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168590: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x168590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168594: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x168594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x168598: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x168598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16859c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x16859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1685a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1685a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1685a4: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x1685a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1685a8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1685a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1685ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1685acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1685b0: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x1685b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1685b4: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x1685b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1685b8: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x1685b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1685bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1685bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1685c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1685c4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1685C4u;
    SET_GPR_U32(ctx, 31, 0x1685CCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1685C4u, 0x1685CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1685CCu;
label_1685cc:
    // 0x1685cc: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x1685ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1685d0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1685d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1685d4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1685d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1685d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1685d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1685dc: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1685dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1685e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1685e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1685e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1685e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1685e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1685e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1685ec: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x1685ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1685f0: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1685f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1685f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1685f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1685f8: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1685f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1685fc: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x1685fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x168600: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x168600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x168604: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x168604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168608: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x168608u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16860c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16860Cu;
    SET_GPR_U32(ctx, 31, 0x168614u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16860Cu, 0x168614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168614u;
label_168614:
    // 0x168614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168618: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x168618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16861c: 0x3e00008  jr          $ra
    ctx->pc = 0x16861Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16861Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168624u;
    // 0x168624: 0x0  nop
    ctx->pc = 0x168624u;
    // NOP
    // 0x168628: 0x0  nop
    ctx->pc = 0x168628u;
    // NOP
    // 0x16862c: 0x0  nop
    ctx->pc = 0x16862cu;
    // NOP
    ctx->pc = 0x168630u;
}
